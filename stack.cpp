:wq:wq
* this class is a simplelinked list version 
* of a stack class
* Course : CSCI161.
* Date : 19th feb, 2020.
* Author : Khalid.
*/ 
#include"StringStack.hpp"
#include"SimpleLinkedList.cpp"
using std :: string;
using std :: cout;
using std :: endl;
//constructor that does nothing
StringStack :: StringStack(){
	//nothing in here

}
//destructor that clears out all the allocated memory with
//the word new.
StringStack :: ~StringStack(){
	while(!is_empty()){
		list_stack.remove_first();
	}
}
//return 1 if the list is empty or else return 0.
bool StringStack :: is_empty()const{
	if (list_stack.get_num_elements() == 0)
		return true;
	else 
		return false;
}
//remove the top element from the list or if the list is 
//empty, throw an exception.
string StringStack :: pop()throw (StackException){
	if(list_stack.get_num_elements() == 0){
		throw StackException("pop()", "stack is empty");
	}
	else{
		return list_stack.remove_first();
	}
}
//getting the top element from the list, if the list is empty 
//, throw an exception.
string StringStack :: top() const throw (StackException){
	if(list_stack.get_num_elements() == 0){
		throw StackException("top()", "stack is empty");
	}
	else{
		return list_stack.get_first_element();
	}
}
//inserting an element into the list.
void StringStack :: push(string element){
	list_stack.insert_first(element);
}

#include<iostream>
#include"SimpleLinkedList.hpp"
using namespace std;
	/************* Constructors / Destructor *********/
//creates an empty list
SimpleLinkedList :: SimpleLinkedList(){
	first = nullptr;
	m_num_elements = 0;
	
}
//creates a shallow copy of the list
SimpleLinkedList :: SimpleLinkedList(const SimpleLinkedList &copy){
	first = copy.first;
	m_num_elements = copy.m_num_elements;

}
//rellocates the memory used for the linked list
SimpleLinkedList :: ~SimpleLinkedList(){
	while(first != nullptr){
		Node *tempptr = first;
		first = first->next;
		delete tempptr;	
	}

}

	/************* Getters and setters ************/
//returns the first element in the list without removing it.
string SimpleLinkedList :: get_first_element() const{
	if (first == nullptr){
		cout<<"nothing is here"<<endl;
		return "";
	}
	else
		return first->element;
}
//returns the number of elements in the list.
int SimpleLinkedList :: get_num_elements() const{
	return m_num_elements;
}
//returns true if the list is empty or else returns false.
bool SimpleLinkedList :: is_empty() const{
	if(m_num_elements == 0)
		return true;
	else 
		return false;
}

	/********* inserting and removing elements ************/
//removes the first element in the list or else returns an empty string.
string SimpleLinkedList :: remove_first(){
	if(m_num_elements == 0){
		return "";
	}
	Node *temp = first;
	string toreturn = temp-> element;
	first = first->next;
	delete temp;
	m_num_elements--;
	return toreturn;	
}
//inserts the elements in the front of the list without altering
//the relative position of the list.
void SimpleLinkedList :: insert_first(string element){
	first = new Node(element, first);
	m_num_elements++;

}

	/********* print out the list *******************/
//printing out the list.
void SimpleLinkedList :: print_contents() const{
	Node * wait = first;
	cout<<"List is: ";
	while(wait != nullptr){
		cout<<wait->element<<", ";
		wait = wait->next;
	}
	cout<<endl;

}


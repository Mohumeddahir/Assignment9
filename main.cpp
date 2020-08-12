#include<iostream>
#include"StringStack.hpp"            
using namespace std;
int main(){
	StringStack st;
	cout<<"is it empty "<<st.is_empty()<<endl;

	try{
		st.pop();
		st.top();
		
	}
	catch(StackException ex){
		cout<< ex.to_string()<<endl;
	}

	st.push("e");
	st.push("z");
	st.push("r");
	st.push("h");
	st.push("y");
	st.push("m");
	st.push("m");
	st.push("q");
	st.push("w");
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;	
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;	
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;	
	
	cout<<"The top element in the list is: "<<st.top()<<endl;
	cout<<"is it empty "<<st.is_empty()<<endl;
	try{
		st.top();
	}
	catch(StackException ex){
		cout<< ex.to_string()<<endl;
	}
	return 0;
}

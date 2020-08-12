#include "StringStack.hpp"
	using std::string;
	using std::cout;
	using std::endl;
	
// This class is the vector version of the stack
// class.
// Created by Bette.

StringStack::StringStack() {
	// nothing to do.
}

StringStack::~StringStack() {
	// just empty the stack
	while (!is_empty()) {
		pop();
	}
}

bool StringStack::is_empty() const {
	return vec_stack.size() == 0;
}

string StringStack::top() const throw(StackException) {
	if (vec_stack.size() == 0) {
		throw StackException("top()", "stack is empty");
	}
	return vec_stack[vec_stack.size()-1];
}

void StringStack::push(string item) {
	vec_stack.push_back(item);
}

string StringStack::pop() throw (StackException) {
	if (vec_stack.size() == 0) {
		throw StackException("pop()","stack is empty");
	}
	string to_rtn = vec_stack[vec_stack.size()-1];
	vec_stack.pop_back();
	return to_rtn;
}


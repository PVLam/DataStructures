#ifndef stack_h
#define stack_h
#include <iostream>
#include "node.h"
using namespace std; 
template<class T>

class Stack
{
private:
	Node<T> *top;
public:
	Stack()
	{
		top = 0;
	};
	void Push(T value)
	{
		Node<T> *n = new Node<T>;
		n->data = value;
		n->next = top;
		top = n;
	};
	T Pop()
	{
		T t = top->data;
		Node<T> *q = top;
		top = top->next;
		delete q;
		return t;
	};
	bool IsEmpty()const
	{
		return top == 0;
	}
};

#endif 

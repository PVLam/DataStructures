#ifndef node_h
#define node_h
#include <iostream>
using namespace std;
template<class T>

struct Node 
{
	T data;
	Node<T> *next;
};

#endif
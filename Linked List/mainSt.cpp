#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	Stack<int> s;
	s.Push(0);
	s.Push(10);
	s.Push(100);
	cout<<s.Push()<<"\n";
	cout<<s.Push()<<"\n";

	Queue<int> q;
	q.EnQueue(3);
	q.EnQueue(5);
	q.EnQueue(8);
	cout<<q.DeQueue()<<"\n";
	return 0;
}	
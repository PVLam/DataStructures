#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	Stack<int> s;
	Queue<int> q;
	q.EnQueue(3);
	q.EnQueue(5);
	q.EnQueue(8);
	cout<<q.DeQueue()<<"\n";
	cout<<q.DeQueue()<<"\n";
	cout<<q.DeQueue()<<"\n";
	cout<<q.DeQueue()<<"\n";

	return 0;
}	
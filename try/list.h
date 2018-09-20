#ifndef list_h
#define list_h
#include "node.h"
template<class T>

class List
{
private:
	Node<T> *head;
public:
	List(): head(0){};
	List(T const &val, int const &loop)
	{
		head =0;
		for(int i=0; i < loop; i++)
		{
			Node <T>*n = new Node<T>;
			n->data = val;
			n->next = 0;
			if(head == 0)
			{
				head =  n;
			}
			else
			{
				Node<T> *p = head;
				while( p->next != 0 )
				{
					p = p->next;
				}
				p->next = n;
			}		
		}
	};

	void pushBack(T v)
	{
		Node<T> *n = new Node<T>;
		n->data = v;
		n->next = 0;
		if(head == 0)
		{
			head =n;
		}
		else
		{
			Node <T> * p =  head;
			while( p->next != 0 )
			{
				p = p->next;
			}
			p->next = n;
		}	
	};
	
	void deleteAt(int const &pos)
	{
		if(pos ==1)
		{
			Node<T> *p = head;
			head = head->next;
			delete p;
			return;
		}
		Node<T> *p = head;
		for(int i=1; i< pos-1; i++)
		{
			p = p->next;
		}
		Node<T> *q = new Node<T>;
		q = p->next;
		p->next = p->next->next;
		delete q;
	};

	void deletebyValue(int v)
	{
		Node<T> *n = new Node<T>;
		n->data = v;
		n->next = 0;
		
		while()
	}
	int Size()const
	{
		Node<T> * p = head;
		int counter=0;
		while(p!= 0)	
		{
			counter++;
			p=p->next;
		}
		return counter;
	};

	void print()
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p->data<<"  ";
			p = p->next;
		}
		cout<<endl;
	};
	
};

#endif
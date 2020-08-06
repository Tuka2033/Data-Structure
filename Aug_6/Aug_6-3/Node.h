#include<iostream>
using namespace std;
class node
{
	int data;
	node* prev;
	node* next;
public:
	node();
	node(int);
	friend class  Doublylinklist;
};

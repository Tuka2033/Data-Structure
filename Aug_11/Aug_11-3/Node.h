#include<iostream>
using namespace std;
class node
{
	int data;
	node* next;
public:
	node();
	node(int);
	friend class cQueue;
};
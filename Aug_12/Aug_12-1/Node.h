#include<iostream>
using namespace std;
class node
{
	int data;
	node* rLink;
	node* lLink;
public:
	node();
	node(int);
	friend class bsTree;
};
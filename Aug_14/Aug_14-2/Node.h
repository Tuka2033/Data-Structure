#include<iostream>
using namespace std;
class node
{
	int data;
	node* left;
	node* right;
public:
	node();
	node(int);
	int getdata();
	friend class bsTree;
};
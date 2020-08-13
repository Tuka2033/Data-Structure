#include<iostream>
using namespace std;
class node
{
	char data;
	node* left;
	node* right;
public:
	node();
	node(char);
	friend class bTree;
};
#pragma once
#include<iostream>
using namespace std;
class node
{
	int data;
	bool visited;
	node* left;
	node* right;
public:
	node();
	node(int);
	int getdata();
	friend class bsTree;
};
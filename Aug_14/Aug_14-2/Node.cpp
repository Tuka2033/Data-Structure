#include"Node.h"
node::node()
{
	data = 0;
	left = NULL;
	right = NULL;
}
node::node(int data)
{
	this->data = data;
	left = NULL;
	right = NULL;
}
int node::getdata()
{
	return data;
}
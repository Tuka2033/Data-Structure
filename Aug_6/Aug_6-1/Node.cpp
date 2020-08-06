#include"Node.h"
node::node()
{
	data = 0;
	prev = NULL;
	next = NULL;
}
node::node(int data)
{
	this->data = data;
	prev = NULL;
	next = NULL;
}
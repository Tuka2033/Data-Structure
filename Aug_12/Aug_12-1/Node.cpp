#include"Node.h"

node::node()
{
	data = 0; 
	rLink = NULL;
	lLink = NULL;
}
node::node(int data)
{
	this->data = data;
	rLink = NULL;
	lLink = NULL;
}
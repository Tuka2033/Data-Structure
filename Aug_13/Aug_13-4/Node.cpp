#include"Node.h"

node::node()
{
	data = 0;
	left = NULL;
	right = NULL;
}
node::node(char data)
{
	this->data = data;
	left = NULL;
	right = NULL;
}
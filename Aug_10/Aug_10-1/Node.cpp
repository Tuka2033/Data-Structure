#include"Node.h"
node::node()
{
	next = NULL;
}
node::node(cBook obj)
{
	this->b = obj;
	next = NULL;
}
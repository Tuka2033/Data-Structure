#include"Book.h"
class node
{
	cBook b;
	node* next;
public:
	node();
	node(cBook);
	friend class cStack;
};
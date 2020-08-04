#include"Employee.h"
class Node
{
	cEmployee e;
	Node* next;
public:
	Node();
	Node(cEmployee e);
	friend class clinkList;
};

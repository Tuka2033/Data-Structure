#include"Node.h"
class cStack
{
	node* head;
	int top;
public:
	cStack();
	node* CreateNode(cBook);
	void Display();
	void Push(cBook);
	void POP();
};
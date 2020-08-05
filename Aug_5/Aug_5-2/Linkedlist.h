#include"Node.h"
class cLinkedlist
{
	node* head;
	int cnt;
public:
	cLinkedlist();
	void creat_list(int);
	void Split(cLinkedlist&, cLinkedlist&, cLinkedlist&);
	void Display();
};

#include"Node.h"
class Doublylinklist
{
	node* head;
	node* tail;
	int cnt;
public:
	Doublylinklist();
	void CreateList(int);
	void AddBegin(int);
	void AddMid(int,int);
	void AddEnd(int);
	void DelBegin();
	void DelMid(int);
	void DelEnd();
	void sort();
	void ForwardDisplay();
	void ReversedDisplay();
};

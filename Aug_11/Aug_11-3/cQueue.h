#include"Node.h"
class cQueue
{
	node* front, * rear;
public:
	cQueue();
	node* createNode(int);
	void Enqueue(int);
	void Dequeue();
	void Display();
};
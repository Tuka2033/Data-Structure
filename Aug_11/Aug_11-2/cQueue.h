#include"Header.h"
class cQueue
{
	int size,front, rear;
	cEmp *arr;
public:
	cQueue();
	cQueue(int);
	void enqueue();
	void dequeue();
	void display();
};
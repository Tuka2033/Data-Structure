#include"Node.cpp"
template<class T>
class cStack
{
	node<T>* head;
	int top;
public:
	cStack();
	node<T>* createNode(T);
	void Push(T);
	void POP();
	void Display();
};

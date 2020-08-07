#include"cStack.h"
template<class T>
cStack<T>::cStack()
{
	head = NULL;
	top = -1;
}
template<class T>
node<T>* cStack<T>::createNode(T val)
{
	node<T>* newnode = new node<T>(val);
	return newnode;
}
template<class T>
void cStack<T>::Push(T val)
{
	node<T>* newNode = createNode(val);
	newNode->setNext(head);
	head = newNode;
	top++;
}
template<class T>
void cStack<T>::POP()
{
	node<T>* temp;
	if (top == -1)
	{
		cout << "\nStack is empty.....!!!!!!";
	}
	else
	{
		temp = head;
		head = head->getNext();
			top--;
	}
}
template<class T>
void cStack<T>::Display()
{
	node<T>* temp;
	temp = head;
	if (head == NULL)
	{
		cout << "\nStack is empty.....!!!!!!";
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->getData() << endl;
			temp = temp->getNext();
		}
	}
}
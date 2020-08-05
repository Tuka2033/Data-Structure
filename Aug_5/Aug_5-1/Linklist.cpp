#include"Linklist.h"
template<class T>
clinkList<T>::clinkList()
{
	head = NULL;
}
template<class T>
node<T>* clinkList<T>::createNode(T val)
{
	node<T>* newnode = new node<T>(val);
	return newnode;
}
template<class T>
void  clinkList<T>::addBegin(T val)
{
	node<T>* newnode = createNode(val);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		newnode->setNext(head);
		head = newnode;
	}
}
template<class T>
void  clinkList<T>::addMid(T val, int pos)
{
	node<T>* temp;
	node<T>* newnode = createNode(val);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		for (int i = 1; i < pos - 1; i++)
		{
			temp = temp->getNext();
		}
		newnode->setNext(temp->getNext());
		temp->setNext(newnode);
	}
}
template<class T>
void  clinkList<T>::addEnd(T val)
{
	node<T>* temp;
	node<T>* newnode = createNode(val);
	temp = head;
	while (temp->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	temp->setNext(newnode);
}
template<class T>
void  clinkList<T>::deletefirst()
{
	node<T>* temp;
	temp = head;
	head = head->getNext();
	delete temp;
}
template<class T>
void  clinkList<T>::deleteMid(int pos)
{
	node<T>* temp, * ptr;
	temp = head;
	ptr = head;
	for (int i = 1; i < pos; i++)
	{
		ptr = temp;
		temp = temp->getNext();
	}
	ptr->setNext(temp->getNext());
	delete temp;
}
template<class T>
void  clinkList<T>::deletelast()
{
	node<T>* temp, * ptr;
	temp = head;
	while (temp->getNext()->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	ptr = temp->getNext();
	temp->setNext(NULL);
	delete ptr;
}
template<class T>
void  clinkList<T>::Display()
{
	node<T>* temp;
	temp = head;
	while (temp != NULL)
	{
		cout << "[" << temp->getData() << "]-->";
		temp = temp->getNext();
	}
	cout << endl;
}
template <class T>
void clinkList<T>::reverse()
{
	node<T>* prev;
	node<T>*cur;
	if (head != NULL)
	{
		prev = head;
		cur = head->getNext();
		head = head->getNext();
		prev->setNext(NULL);
		while (head != NULL)
		{
			head = head->getNext();
			cur->setNext(prev);
			prev = cur;
			cur = head;
		}
		head = prev;
	}
}
template <class T>
clinkList<T>::~clinkList()
{
	node<T>* temp;
	while (head != NULL)
	{
		temp = head;
		head = head->getNext();
		delete temp;
	}
}
#include"Node.h"
template<class T>
node<T>::node()
{
	data = 0;
	next = NULL;
}
template<class T>
node<T>::node(T data)
{
	this->data = data;
	next = NULL;
}
template<class T>
void node<T>::setData(T data)
{
	this->data = data;
}
template<class T>
void node<T>::setNext(node* next)
{
	this->next = next;
}
template<class T>
T node<T>::getData()
{
	return data;
}
template<class T>
node<T>* node<T>::getNext()
{
	return next;
}
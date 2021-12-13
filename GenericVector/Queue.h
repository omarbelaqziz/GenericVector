#pragma once
template <class T>
class Queue
{
private:
	Node <T>* head;
	Node <T>* back;
	int nbrElements;
public:
	void push(T);

};

template <class T>
class Node
{
private:
	T data;
	Node <T>* next;
public:
	Node(T, Node*);

};

template<class T>
Node<T>::Node(T dat, Node* nex)
{
	this->data = dat;
	this->next = nex;
}

template<class T>
void Queue<T>::push(T data)
{
	if(this->nbrElements == 0)
		this->head = this->back = new Node()
}

#ifndef DYNAMICSTACK_H
#define	DYNAMICSTACK_H
#include <iostream>
using namespace std;

//Stac kTemplate
template <class T>
class DynamicStack
{
private:
	// Structure for the Stack NOde
	struct StackNode
	{
		T value; // Value in the node
		StackNode* next; // Pointer to the next node
	};
	StackNode* top;
public:
	//Constructor
	DynamicStack()
	{
		top = nullptr;
	}
	//Destructor
	~DynamicStack();

	// Operation
	void push(T);
	void pop(T&);
	bool isEmpty();
	void operator=(DynamicStack<T>);

};

template <class T>
DynamicStack<T>::~DynamicStack()
{
	StackNode* nodeptr, * nextNode;
	nodeptr = top;
	while (nodeptr != nullptr)
	{
		nextNode = nodeptr->next;
		delete nodeptr;
		nodeptr = nextNode;
	}
}

template <class T>
void DynamicStack<T>::push(T item)
{
	StackNode* newNode = nullptr;

	newNode = new StackNode;
	newNode->value = item;
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

template <class T>
void DynamicStack<T>::pop(T& item)
{
	StackNode* temp = nullptr;
	if (isEmpty())
	{
		cout << "The Stack is Empty." << endl;
	}
	else
	{

		item = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}

template <class T>
bool DynamicStack<T>::isEmpty()
{
	bool status = false;

	if (!top)
		status = true;

	return status;
}

template <class T>
void DynamicStack<T>::operator=(DynamicStack<T> obj)
{
	T in;
	while (!obj.isEmpty())
	{
		obj.pop(in);
		DynamicStack::push(in);
	}
}

#endif // !SYNAMICSTACK_H

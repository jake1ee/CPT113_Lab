#include "DoubleList.h"
#include <iostream>

using namespace std;

template <class T>
DoubleList<T>::DoubleList()
{
	head = nullptr;
	end = nullptr;
}

template <class T>
DoubleList<T>::~DoubleList()
{
	Node* current = head;
	while (current != 0) {
		Node* next = current->next;
		free(current);
		current = next;
	}
	head = 0;
}

template <class T>
void DoubleList<T>::appendNode(T data)
{
	Node* newNode = new Node;
	newNode->value = data;
	newNode->next = nullptr;
	if (head == nullptr)
	{
		newNode->previous = nullptr;
		head = newNode;
	}
	else
	{	
		newNode->previous = end;
		end->next = newNode;
	}
	end = newNode;
}

template <class T>
void DoubleList<T>::insertNode(T data)
{
	Node* newnNode = new Node;
	newnNode->value = data;

	Node* current = head;
	if (head == nullptr)
	{
		return;
	}
	else
	{
		while (current != nullptr)
		{
			if (current->value > data)
			{
				newnNode->next = current->next;
				current->next = newnNode;
				newnNode->previous = current;
				cout << "Done Inssert Node with data " << data << endl;
				return;
			}
			current = current->next;
		}
		cout << "Insert Failed" << endl;
	}
}

template <class T>
void DoubleList<T>::deleteNode(T data)
{
	Node* current = head;
	Node* prev = new Node;

	if (head == nullptr)
	{
		return;
	}
	else
	{
		while (current != nullptr)
		{
			if (current->value == data)
			{
				prev->next = current->next;
				current->previous = prev;
				free(current);
				cout << "Done Delete The Data " <<data<< endl;
				return;
			}
			prev = current;
			current = current->next;
		}
		cout << "Cant Find The data" << endl;
	}
}

template <class T>
void DoubleList<T>::arrangeNode(bool Incr )
{
	Node* current = head , * index = nullptr;
	T temp;
	if (head == nullptr)
	{
		return;
	}
	else
	{
		while (current!=nullptr)
		{
			index = current->next;
			while (index != nullptr)
			{
				switch (Incr)
				{

				case true:
					if (current->value > index->value)
					{
						temp = current->value;
						current->value = index->value;
						index->value = temp;
					}
					break;

				case false:
					if (current->value < index->value)
					{
						temp = current->value;
						current->value = index->value;
						index->value = temp;
					}
					break;
				}
				index = index->next;
			}
			current = current->next;
		}
	}
}

template <class T>
bool DoubleList<T>::palindrome()
{
	Node* Front = head;
	Node* Back = end;
	bool same = true;
	while (Front != nullptr || Back != nullptr)
	{
		if (Front->value != Back->value)
		{
			same = false;
			return same;
		}
		Front = Front->next;
		Back = Back->previous;
	}
	return same;
}

template <class T>
void DoubleList<T>::showList()
{
	Node* nodeptr;
	for (nodeptr = head; nodeptr != nullptr; nodeptr = nodeptr->next)
	{	
		cout << nodeptr->value << ' ';
	}
	cout << endl;
}

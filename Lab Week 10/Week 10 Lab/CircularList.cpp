#include "CircularList.h"
#include<iostream>

using namespace std;

CircularList::CircularList()
{
	head = nullptr;
	Node::Node();
}

CircularList::~CircularList()
{
	if (head)
	{
		Node* nodeptr = head->next;
		Node* temp = NULL;
		while (nodeptr!= head)
		{
			Node* temp = nodeptr->next;
			delete nodeptr;
			nodeptr = temp;
		}
		delete head;
	}

}

void CircularList::appendNode(int data, int key)
{
	Node* newNode = new Node;
	newNode->key = key;
	newNode->data = data;
	if (nodeExists(newNode->key) != nullptr)
	{
		cout << "Node already exists with key value: " << newNode->key << "Append another node with different key value" << endl;
	}
	else
	{
		if (head == nullptr)
		{
			head = newNode;
			cout << "Append First Node at head position with value :" << newNode->data << endl;
		}
		else
		{
			Node* nodeptr = head;
			while (nodeptr->next != head)
			{
				nodeptr = nodeptr->next;
			}
			nodeptr->next = newNode;
			cout << "Node Appended" << endl;
		}
		newNode->next = head;
	}
}

void CircularList::insertAfterNode(int key, int data)
{
	Node* nodeptr = nodeExists(key);
	Node* newNode = new Node;
	newNode->key = key + 1;
	newNode->data = data;
	if (nodeptr == nullptr)
	{
		cout << "No node exist with key value: " << key << endl;
	}
	else
	{
		if (nodeExists(newNode->key) != NULL)
		{
			Node* temp = head;
			Node* next = head->next;
			do
			{
				
				if (temp->key == newNode->key && temp->key + 1 == next->key)
				{
					temp->key++;
					next->key++;
				}
				else if (temp->key == newNode->key && next->key - 1 == temp->key + 1)
				{
					temp->key++;
				}
				else if (temp->key > newNode->key && temp->key == next->key)
				{
					temp++;
					next->key++;
				}
				temp = next;
				next = next->next;
			} while (temp != head);
		}

		if (nodeptr->next == head)
		{
			newNode->next = head;
			nodeptr->next = newNode;
			cout << "Node Insert at the end" << endl;
		}
		else
		{
			newNode->next = nodeptr->next;
			nodeptr->next = newNode;
			cout << "Node Inser at Between" << endl;
		}
	}
}

void CircularList::deleteNode(int key)
{
	Node* ptr = nodeExists(key);
	if (ptr == nullptr)
	{
		cout << "No node exist with key value: " << key << endl;
	}
	else
	{
		if (ptr == head)
		{
			if (ptr->next == nullptr)
			{
				head = nullptr;
				cout << "Head Node unlinked... List Empty" << endl;
			}
			else
			{
				while (ptr->next != head)
				{
					ptr = ptr->next;
				}
				ptr->next = head->next;
				head = ptr->next;
				cout << "Node Unlinked with key value :" << key << endl;
			}
		}
		else
		{
			Node* temp = nullptr;
			Node* prev = head;
			Node* current = head->next;
			while (current!=head)
			{
				if (current->key == key)
				{
					temp = current;
					current = nullptr;
					prev->next = temp->next;
					cout << "Node Unlinked" << endl;
					return;
				}
				else
				{
					prev = current;
					current = current->next;
				}
			}
			cout << "Cant Find the Node" << endl;
		}
	}

}

void CircularList::Descending(bool choice = true)
{
	Node* current = head, * index = nullptr;
	int temp;
	if (head == nullptr)
	{
		return;
	}
	else
	{
		do
		{
			index = current->next;
			while (index != head)
			{
				switch (choice)
				{

				case false:
					if (current->data > index->data)
					{
						temp = current->data;
						current->data = index->data;
						index->data = temp;
					}
					break;

				case true:
					if (current->data < index->data)
					{
						temp = current->data;
						current->data = index->data;
						index->data = temp;
					}
					break;
				}
				index = index->next;
			}
			current = current->next;
		} while (current != head);
		
	}
}

void CircularList::showList()
{
	Node* nodeptr = head;
	cout << "Key(value)" << endl;
	do
	{
		cout << nodeptr->key << '(' << nodeptr->data << ')' << ", ";
		nodeptr = nodeptr->next;
	} while (nodeptr != head);
}
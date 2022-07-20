#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include<string>
#include"ListNode.h"
using namespace std;

//*******************
// LinkedList class *
//*******************
template <class T> class LinkedList
{
private:
	ListNode<T>* head;
public:
	// Constructor 
	LinkedList()
		{ head = NULL; }

	// Destructor 
	~LinkedList();

	// List head pointer
	// Linked list operations
	void appendNode(T); //to add node
	void insertNode(T); //to insert node
	void deleteNode(T); //to delete node
	void searchNode(T); //to delete node
	void displayList() const; //to display all nodes
};
#endif
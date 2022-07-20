#include "LinkList.h"

//****************************************
// Destructor *
// This function deletes every node in the list. *
//**************************************************

		
template <class T> LinkedList<T>::~LinkedList()
{
	ListNode<T>* nodePtr; // To traverse the list
	ListNode<T>* nextNode; // To point to the next node
	// Position nodePtr at the head of the list.
	nodePtr = head;
	// While nodePtr is not at the end of the list...
	while (nodePtr != NULL)
	{
		// Save a pointer to the next node.
		nextNode = nodePtr->next;
		// Delete the current node.
		delete nodePtr;
		// Position nodePtr at the next node.
		nodePtr = nextNode;
	}
}

//**************************************************
// appendNode appends a node containing the value *
// pased into newValue, to the end of the list. *
//**************************************************

template <class T>
void LinkedList<T>::appendNode(T newValue)
{
	ListNode<T>* newNode; // To point to a new node
	ListNode<T>* nodePtr; // To move through the list
	// Allocate a new node and store newValue there.
	newNode = new ListNode<T>(newValue);
	// If there are no nodes in the list,make newNode the first node.
	if (!head)
		head = newNode;
	else // Otherwise, insert newNode at end.
	{
		// Initialize nodePtr to head of list.
		nodePtr = head;
		// Find the last node in the list.
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		// Insert newNode as the last node.
		nodePtr->next = newNode;
	}
}

//**************************************************
// displayList shows the value stored in each node *
// of the linked list pointed to by head. *
//**************************************************

template <class T>
void LinkedList<T>::displayList() const
{
	ListNode<T>* nodePtr;
	// To move through the list
	// Position nodePtr at the head of the list.
	nodePtr = head;
	// While nodePtr points to a node, traverse the list.
	while (nodePtr)
	{
		// Display the value in this node.
		nodePtr->value.displayPerson();
		cout << endl;
		// Move to the next node.
		nodePtr = nodePtr->next;
	}
}

//**************************************************
// The insertNode function inserts a node with. *
// newValue copied to its value member. *
//**************************************************

template <class T>
void LinkedList<T>::insertNode(T newValue)
{
	ListNode<T>* newNode;
	ListNode<T>* nodePtr;
	ListNode<T>* previousNode = NULL;
	// The previous
	// Allocate a new node and store newValue there.
	newNode = new ListNode<T>(newValue);
	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else // Otherwise, insert newNode
	{
		// Position nodePtr at the head of list.
		nodePtr = head;
		// Initialize previousNode to nullptr.
		previousNode = NULL;
		// A new node
		// To traverse the list node
		// Skip all nodes whose value is less than newValue.
		while (nodePtr != NULL && nodePtr->value.getIC() <newValue.getIC()) // method in PersonInfo
		{
		}
		// If the new node is to be the 1st in the list,
		// insert it before all other nodes.
		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else // Otherwise insert after the previous node.
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

//*****************************************************
// The deleteNode function searches for a node *
// with searchValue as its value. The node, if found, *
// is deleted from the list and from memory. *
//*****************************************************

template <class T>
void LinkedList<T>::deleteNode(T searchValue)
{
	ListNode<T>* nodePtr; // To traverse the list
	ListNode<T>* previousNode; // To point to the previous node
	// If the list is empty, do nothing.
	if (!head)
		cout << "List is Empty\n";
	// Determine if the first node is the one.
	if (head->value.getIC() == searchValue.getIC())
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;
		// Skip all nodes whose value member is not equal to num.
		while (nodePtr != NULL && nodePtr->value.getIC() !=
			searchValue.getIC())
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If nodePtr is not at the end of the list, link the previous node
		// to the node after nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

template <class T>
void LinkedList<T>::searchNode(T searchValue)
{
	ListNode<T>* nodePtr; // To traverse
	ListNode<T>* previousNode; // To point to
	// If the list is empty, do nothing.
	if (!head)
		cout << "List is Empty\n";
	// Determine if the first node is the one.
	if (head->value.getIC() == searchValue.getIC())
	{
		cout << "\n Found at first node \n";
		head->value.displayPerson(); system("pause");
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;
		// Skip all nodes whose value member is not equal to IC.
		while (nodePtr != NULL && nodePtr->value.getIC() !=
			searchValue.getIC())
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If nodePtr is not at the end of the list,
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			cout << "\n Found \n";
			nodePtr->value.displayPerson();
			system("pause");
		}
		else
		{
			cout << "\nNot found\n"; system("pause");
		}
	}
}
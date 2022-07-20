#ifndef LISTNODE_H
#define LISTNODE_H

//*********************************************
// The ListNode class creates a type used to *
// store a node of the linked list. *
//*********************************************
template <class T> class ListNode
{
public:
	T value; // Node value T of class personInfo - composition
	ListNode<T>* next; // Pointer to the next node
	//Constructor
	ListNode(T nodeValue);
};

#endif // 

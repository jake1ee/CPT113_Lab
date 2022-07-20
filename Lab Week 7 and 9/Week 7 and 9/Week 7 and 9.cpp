#include <iostream>
#include "LinkList.h"
//#include "LinkList.cpp"
#include "PersonInfo.h"

using namespace std;
//
//template <class T>
//class List
//{
//private:
//	struct ListNode
//	{
//		T data;
//		ListNode* next;
//	};
//	ListNode* head;
//public:
//	List();
//	~List();
//	void appending(T);
//	void inserting(T);
//	void inserting(int, T);
//	void deleting(T);
//	void reverse();
//	void print();
//	int search(T);
//
//};
//
//template<class T>
//List<T>::List()
//{
//	head = nullptr;
//}
//
//template<class T>
//List<T>::~List()
//{
//	ListNode* current = head;
//	ListNode* next;
//	while (current != nullptr) {
//		next = current->next;
//		delete current;
//		current = next;
//	}
//	head = nullptr;
//}
//
//template<class T>
//void List<T>::appending(T data)
//{
//	ListNode* node;
//	ListNode* nodeptr;
//
//	node = new ListNode;
//	node->data = data;
//	node->next = nullptr;
//
//	if (!head)
//	{
//		head = node;
//	}
//	else
//	{
//		nodeptr = head;
//		while (nodeptr->next)
//		{
//			nodeptr = nodeptr->next;
//		}
//
//		nodeptr->next = node;
//	}
//}
//
//template<class T>
//void List<T>::inserting(T data)
//{
//	ListNode* node;
//	ListNode* nodeptr;
//	ListNode* previos = nullptr;
//
//	node = new ListNode;
//	node->data = data;
//
//
//	if (!head)
//	{
//		head = node;
//		node->next = nullptr;
//	}
//	else
//	{
//		nodeptr = head;
//
//
//		while (nodeptr != nullptr && nodeptr->data < data)
//		{
//			previos = nodeptr;
//			nodeptr = nodeptr->next;
//		}
//
//		if (previos == nullptr)
//		{
//			head = node;
//			node->next = nodeptr;
//		}
//		else
//		{
//			previos->next = node;
//			node->next = nodeptr;
//		}
//	}
//}
//
//template<class T>
//void List<T>::inserting(int pos, T Data)
//{
//	ListNode* node;
//	ListNode* nodeptr = head;
//
//	node = new ListNode;
//	node->data = Data;
//	if (pos == 0)
//	{
//		node->next = head;
//		delete head;
//		head = node;
//	}
//	else
//	{
//		for (int i = 1; i < pos; i++)
//		{
//			if (nodeptr == nullptr)
//			{
//				cout << "Invalid Pos" << endl;
//				return;
//			}
//			nodeptr = nodeptr->next;
//		}
//			
//		node->next = nodeptr->next;
//		nodeptr->next = node;
//	}
//
//}
//
//template<class T>
//void List<T>::deleting(T data)
//{
//	ListNode* previos = nullptr;
//	ListNode* nodeptr;
//
//
//	if (!head)
//	{
//		return;
//	}
//	if (head->data == data)
//	{
//		nodeptr = head->next;
//		delete head;
//		head = nodeptr;
//	}
//	else
//	{
//		nodeptr = head;
//		while (nodeptr != nullptr && nodeptr->data != data)
//		{
//			previos = nodeptr;
//			nodeptr = nodeptr->next;
//		}
//
//		if (nodeptr)
//		{
//			previos->next = nodeptr->next;
//			delete nodeptr;
//		}
//	}
//}
//template<class T>
//void List<T>::reverse()
//{
//	ListNode* current = head;
//	ListNode* next = nullptr;
//	ListNode* previos = nullptr;
//
//	while (current != nullptr) {
//		// Store next
//		next = current->next;
//		// Reverse current node's pointer
//		current->next = previos;
//		// Move pointers one position ahead.
//		previos = current;
//		current = next;
//	}
//	head = previos;
//
//}
//
//template<class T>
//void List<T>::print()
//{
//	ListNode* node = head;
//
//	cout << "Element in Link List:" << endl;
//	while (node != nullptr)
//	{
//		cout << node->data << endl;
//		node = node->next;
//	}
//}
//
//template<class T>
//int List<T>::search(T Data)
//{
//	ListNode* nodeptr = head;
//	int pos = 0;
//	while (nodeptr != nullptr)
//	{
//		if (nodeptr->data == Data)
//		{
//			return pos;
//		}
//		nodeptr = nodeptr->next;
//	}
//
//	return -1;
//
//}
//
//int main()
//{
//	List<double> list;
//	list.appending(12.0);
//	list.appending(13.5);
//	list.inserting(13.1);
//	list.inserting(10, 13.2);
//	list.print();
//	list.deleting(13.5);
//	list.print();
//	list.reverse();
//	list.print();
//	cout << list.search(13.1) << list.search(0) << endl;
//
//	return 0;
//}

int main()
{
	LinkedList<PersonInfo> list;

	PersonInfo person("Lee Ter Qin", 21212020867, 'M', 20);
	PersonInfo person2("Lee Kian Pak", 2131123123, 'F', 20);
	list.appendNode(person);
	list.appendNode(person2);

	list.displayList();
	
	
	return 0;
}
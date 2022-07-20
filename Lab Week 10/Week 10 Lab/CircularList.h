#ifndef CIRCULARLINK_H
#define CIRCULARLIST_H

class CircularList
{
private:
	struct Node
	{
		int key;
		int data;
		Node* next;
		Node()
		{
			key = 0;
			data = 0;
			next = nullptr;
		}
	};
	Node* head;
public:
	CircularList();
	~CircularList();
	void appendNode(int, int);
	void insertAfterNode(int, int);
	void deleteNode(int);
	void Descending(bool);
	void showList();

	Node* nodeExists(int key)
	{
		Node* temp = nullptr;
		Node* nodeptr = head;
		if (nodeptr == nullptr)
		{
			return nullptr;
		}
		else
		{
			do
			{
				if (nodeptr->key == key)
				{
					temp = nodeptr;
				}
				nodeptr = nodeptr->next;
			} while (nodeptr != head);
			return temp;
		}
	}
};
#endif // !CIRCULARLINK_H

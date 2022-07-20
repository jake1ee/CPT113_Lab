#ifndef DOUBLELIST_H
#define	DOUBLELIST_H

template <class T>
class DoubleList
{
private:
	struct Node
	{
		T value;
		Node* next;
		Node* previous;
	};
	Node* head;
	Node* end;
public:
	DoubleList();
	~DoubleList();
	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	void arrangeNode(bool Incr = true);
	bool palindrome();
	void showList();
};

#endif // !DOUBLELIST_H


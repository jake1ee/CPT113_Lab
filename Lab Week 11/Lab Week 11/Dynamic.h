#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

template <class T>
class DynamicQueue
{
private:
	struct Node
	{
		T data;
		struct Node* next;
	};
	Node* front;
	Node* rear;
	int numItems;
public:
	DynamicQueue();
	~DynamicQueue();
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty();
	void clear();
};

template<class T>
DynamicQueue<T>::DynamicQueue()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

template<class T>
DynamicQueue<T>::~DynamicQueue()
{
	clear();
}

template<class T>
void DynamicQueue<T>::enqueue(T item)
{
	Node* newNode = new Node;
	newNode->data = item;
	newNode->next = nullptr;
	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
	numItems++;
}

template<class T>
void DynamicQueue<T>::dequeue(T& item)
{
	Node* temp = nullptr;

	if (isEmpty())
	{
		cout << "The queue is empty." << endl;
	}
	else
	{
		item = front->data;
		temp = front;
		front = front->next;
		delete temp;

		numItems--;
	}
}

template<class T>
bool DynamicQueue<T>::isEmpty()
{
	bool status;
	if (numItems == 0)
		status = true;
	else
		status = false;
	return status;
}

template<class T>
void DynamicQueue<T>::clear()
{
	T value;
	while (!isEmpty())
	{
		dequeue(value);
	}
}
#endif // !1

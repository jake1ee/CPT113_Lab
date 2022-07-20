#ifndef STATICQUEUE_H
#define STATICQUEUE_H
#include<iostream>

using namespace std;

template <class T>
class StaticQueue
{
private:
	T* queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;

public:
	StaticQueue(int);
	StaticQueue(const StaticQueue &);
	~StaticQueue();
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
};

template <class T>
StaticQueue<T>::StaticQueue(int size)
{
	queueSize = size;
	queueArray = new T[queueSize];
	front = -1;
	rear = -1;
	numItems = 0;
}

template <class T>
StaticQueue<T>::StaticQueue(const StaticQueue&  obj)
{
	queueArray = new T{ obj.queueSize };
	queueSize - obj.queueSize;
	front = obj.front;
	rear = obj.rear;
	numItems = obj.numItems;

	for (int count = 0; count < obj.queueSize; count++)
	{
		queueArray[count] = obj.queueArray[count];
	}
}

template <class T>
StaticQueue<T>::~StaticQueue()
{
	delete[] queueArray;
}

template <class T>
void StaticQueue<T>::enqueue(T item)
{
	if (isFull())
	{
		cout << "The queue is Full." << endl;
	}
	else
	{
		rear = (rear + 1) % queueSize;
		queueArray[rear] = item;
		numItems++;
	}
}

template <class T>
void StaticQueue<T>::dequeue(T& item)
{
	if (isEmpty())
	{
		cout << "The queue is empty." << endl;
	}
	else
	{
		front = front + 1 % queueSize;
		item = queueArray[front];
		numItems--;
	}
}

template <class T>
bool StaticQueue<T>::isEmpty() const
{
	bool status;
	if (numItems == 0)
		status = true;
	else
		status = false;
	return status;
}
 
template <class T>
bool StaticQueue<T>::isFull() const
{
	bool status;
	if (numItems < queueSize)
		status = false;
	else
		status = true;
	return status;
}

template <class T>
void StaticQueue<T>::clear()
{
	front = queueSize - 1;
	rear = queueSize - 1;
	numItems = 0;
}

#endif // !StaticQueue_H

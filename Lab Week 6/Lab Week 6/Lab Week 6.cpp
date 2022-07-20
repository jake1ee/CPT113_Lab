#include<iostream>

using namespace std;


//Question 3
//class Health
//{
//private:
//	long long int passportNum;
//	float* ptr;
//
//public:
//	void setData(long long int, float, float);
//	void displayData();
//	Health();
//	~Health();
//};
//
//void Health::setData(long long int passportNum, float age, float bodyTemp)
//{
//	this->passportNum = passportNum;
//	ptr[0] = age;
//	ptr[1] = bodyTemp;
//}
//
//void Health::displayData()
//{
//	cout << "Passport Number: " << passportNum << endl;
//	cout << "Age: " << ptr[0] << endl;
//	cout << "Body Temperature: " << ptr[1] << endl;
//}
//
//Health::Health()
//{
//	passportNum = 0;
//	ptr = new float[2];
//}
//
//Health::~Health()
//{
//	delete ptr;
//}

//Question 4
//template <class T>
//T half(T number)
//{
//	return number / 2.0;
//}

//Question 5
//#include<algorithm>
//template<class T>
//void arrange(T& var1, T& var2, T& var3)
//{
//	cout << var1 << var2 << var3 << endl;
//	t temp;
//	if (var3 < var1 && var3 < var2)
//	{
//		temp = var1;
//		var1 = var3;
//		var3 = temp;
//	}
//	if (var2 < var1)
//	{
//		temp = var1;
//		var1 = var2;
//		var2 = temp;
//	}
//	if (var3 < var2)
//	{
//		temp = var2;
//		var2 = var3;
//		var3 = temp;
//	}
//	cout << var1 << var2 << var3 << endl;
//	method 2
//	if (var2 < var1)
//	{
//		swap(var1, var2);
//	}
//	if (var3 < var2)
//	{
//		swap(var3, var2);
//		if (var2 < var1)
//		{
//			swap(var1, var2);
//		}
//	}
//}


//Question6
//template <class T>
//class List
//{
//public:
//	List();
//	List(int);
//	List(const List& );
//	~List();
//	void setSize(int);
//	void setList();
//	void displayList();
//
//private:
//	T* ptr;
//	int size;
//};
//
//template <class T>
//List<T>::List()
//{
//	size = 0;
//	ptr = new T[size];
//}
//
//template <class T>
//List<T>::List(int s)
//{
//	size = s;
//	ptr = new T[size];
//}
//
//template <class T>
//List<T>::List(const List &obj)
//{
//	size = obj.size;
//	delete[] ptr;
//	ptr = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		ptr[i] = obj.ptr[i];
//	}
//
//}
//
//template <class T>
//List<T>::~List()
//{
//	delete[] ptr;
//}
//
//template <class T>
//void List<T>::setSize(int size)
//{
//	this->size = size;
//	delete[] ptr;
//	ptr = new T[size];
//}
//
//template <class T>
//void List<T>::setList()
//{
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Element" << i + 1 << ": ";
//		cin >> ptr[i];
//	}
//}
//
//template <class T>
//void List<T>::displayList()
//{
//	cout << "\nList of Element" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << ptr[i] << " ";
//	}
//}

template<class T>
class Rectangle
{
public:
	Rectangle();
	Rectangle(T, T);
	void setData(T, T);
	T getLength();
	T getWidth();
	T getArea();
	void display();

private:
	T width, length;

};

template <class T>
Rectangle<T>::Rectangle()
{
	width = 0;
	length = 0;
}

template<class T>
Rectangle<T>::Rectangle(T width, T length)
{
	this->width = width;
	this->length = length;
}

template<class T>
void Rectangle<T>::setData(T width, T length)
{
	this->width = width;
	this->length = length;
}

template<class T>
T Rectangle<T>::getLength()
{
	return length;
}

template<class T>
T Rectangle<T>::getWidth()
{
	return width;
}

template<class T>
T Rectangle<T>::getArea()
{
	return length * width;
}

template<class T>
void Rectangle<T>::display()
{
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
}

int main()
{
	/*Health test;
	test.setData(21212020867, 21.0, 36.9);
	test.displayData();*/

	/*cout << half(4.5);*/

	/*int a = 3,
		b = 4,
		c = 5;
	double d = 2.5,
		e = 3.5,
		f = 4.5;
	char first = 'a',
		second = 'b',
		third = 'c';
	arrange(first,second,third);*/


	/*List<int> tet;
	List<int> Try(3);
	tet.setSize(3);
	tet.setList();
	Try.setList();
	List<int> copy = Try;
	tet.displayList();
	Try.displayList();
	copy.displayList();*/

	Rectangle<char> box;
	box.setData(10, 4);
	box.display();
	cout<<box.getArea();

	return 0;
}
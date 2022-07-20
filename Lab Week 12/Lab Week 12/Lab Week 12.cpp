/*
DynIntStack::DynIntStack()
{
	stackTop = nullptr;
}
DynIntStACK::~DynIntStack()
{
	StackNode* temp;
	while(stackTop!=NULL)
	{
		temp = stackTop;
		stackTop = stackTop->next;
		delete temp;
	{
}
*/

#include"DynamicStack.h"
#include"Book.h"

void inputBook(Book&);
void displayBook(Book&);
bool isOperator(char);
string preToInfix(string);

int main()
{
	/*Book book, popOut;
	DynamicStack<Book> stack, stack2;
	for (int i = 0; i < 3; i++)
	{
		inputBook(book);
		stack.push(book);
		cin.get();
	}

	for (int i = 0; i < 3; i++)
	{
		stack.pop(popOut);
		displayBook(popOut);
	}*/

	DynamicStack<char> stack, stack2;
	stack.push('a');
	stack.push('b');
	stack.push('c');
	stack2 = stack;

	char t;
	while (!stack2.isEmpty())
	{
		stack2.pop(t);
		cout << t;
	}
	while (!stack.isEmpty())
	{
		stack.pop(t);
		cout << t;
	}
	
	
	
	return 0;
}

void inputBook(Book& obj)
{
	string input;
	int page;

	cout << "\nPlease Enter Book Title: ";
	getline(cin, input);
	obj.setTile(input);

	cout << "Enter Author Name: ";
	getline(cin, input);
	obj.setAuthor(input);

	cout << "Enter Last Page Read: ";
	cin >> page;
	obj.setPage(page);

	obj.setDate();
}

void displayBook(Book& obj)
{
	cout << "\nTitle: " << obj.getTitle() << endl;
	cout << "Author: " << obj.getAuthor() << endl;
	cout << "Page Stop Read is " << obj.getPage() << " Page" << endl;
	cout << "Last Date Read: ";
	obj.displayDate();
	cout << endl;
}

bool isOperator(char x) {
	switch (x) {
	case '+':
	case '-':
	case '/':
	case '*':
	case '^':
	case '%':
		return true;
	}
	return false;
}

// Convert prefix to Infix expression
string preToInfix(string pre_exp) {
	DynamicStack<string> s;
	string in_exp;
	// length of expression
	int length = pre_exp.length();
	// reading from right to left
	for (int i = length - 1; i >= 0; i--) {

		// check if symbol is operator
		if (isOperator(pre_exp[i])) {

			// pop two operands from stack
			string op1;
			string op2;

			s.pop(op1);
			s.pop(op2);

			// concat the operands and operator
			string temp = "(" + op1 + pre_exp[i] + op2 + ")";

			// Push string temp back to stack
			s.push(temp);
		}

		// if symbol is an operand
		else {

			// push the operand to the stack
			s.push(string(1, pre_exp[i]));
		}
	}

	// Stack now contains the Infix expression
	s.pop(in_exp);
	return in_exp;
}

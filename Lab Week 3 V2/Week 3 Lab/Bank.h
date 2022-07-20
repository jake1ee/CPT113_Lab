
#ifndef Bank_h
#define Bank_h

#include"SubBank.h"
#include <iostream>
using namespace std;

class Bank
{
public:
	void getBalance()
	{
		cout << "Bank A amount is RM " << this->BankA.getBalance() << endl;
		cout << "Bank B amount is RM " << this->BankB.getBalance() << endl;
		cout << "Bank C amount is RM " << this->BankC.getBalance() << endl;
	}

	Bank()
	{
		this->BankA.setBalance(0);
		this->BankB.setBalance(0);
		this->BankC.setBalance(0);
	}
	Bank(double amount1, double amount2, double amount3)
	{
		this->BankA.setBalance(amount1);
		this->BankB.setBalance(amount2);
		this->BankC.setBalance(amount3);
	}
	

private:
	SubBank BankA;
	SubBank BankB;
	SubBank BankC;

};

#endif // !Bank_h

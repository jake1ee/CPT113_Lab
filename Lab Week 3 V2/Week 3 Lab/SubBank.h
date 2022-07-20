#ifndef SubBank_h
#define SubBank_h
#include <iostream>
using namespace std;

class SubBank
{
public:
	double getBalance()
	{
		return this->amount;
	}
	void setBalance(double add)
	{
		this->amount += add;
	}
	SubBank()
	{
		this->amount = 0;
	}
	SubBank(double amount) 
	{
		this->amount = amount;
	}



private:
	double amount;

};

#endif // !Bank_h

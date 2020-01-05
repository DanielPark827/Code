#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <iostream>
#include <cstring>

using namespace std;

class Acoount
{
	int accID;
	int balance;
	char * cusName;
public:
	Account(int accID, int money, const char * name)
		: accID{ accID }, balance{ money }
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	Account(const Account &ref)
		: accID{ ref.accID }, balance{ ref.balance }
	{
		cusName = new char[strlen(ref.cusName) + 1];
		strcpy(cusName, ref.cusName);
	}
	int GetAccId() { return accID; }
	void Deposit(int money)
	{
		balance += money;
	}
	int withdraw(int money)
	{
		if (balance < money)
		{
			return 0;
		}

		balance -= money;
		return money;
	}

	void ShowAccINfo()
	{
		cout << accID << endl;
		cout << cusName << endl;
		cout << balance << endl;
	}
	~Account()
	{
		delete[]cusName;
	}

};
#endif

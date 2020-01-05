//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int NAME_LEN = 20;
//
//void SM();
//void MA();
//void DM();
//void WM();
//void SAAI();
//
//enum {M = 1,D,W,I,E};
//
//typedef struct
//{
//	int accID;
//	int balance;
//	char cusName[NAME_LEN];
//} Account;
//
//Account accArr[100];
//int accNum = 0;
//
//int main()
//{
//	int choice = 0;
//
//	while (1)
//	{
//		SM();
//		cout << "선택: ";
//		cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case M:
//			MA();
//			break;
//		case D:
//			DM();
//			break;
//		case W:
//			WM();
//			break;
//		case I:
//			SAAI();
//			break;
//		case E:
//			return 0;
//		default:
//			cout << "Illegal selection.." << endl;
//		}
//	}
//	return 0;
//}
//
//void SM()
//{
//	cout << "----menu----" << endl;
//	cout << "1. 계좌개설" << endl;
//	cout << "2. 입 금" << endl;
//	cout << "3. 출 금" << endl;
//	cout << "4. 계좌정보 전체 출력" << endl;
//	cout << "5. 프로그램 종료" << endl;
//}
//
//void MA()
//{
//	int id;
//	char name[NAME_LEN];
//	int balance;
//
//	cout << "[계좌개설]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "이 름: "; cin >> name;
//	cout << "입금액: "; cin >> balance;
//	cout << endl;
//
//	accArr[accNum].accID = id;
//	accArr[accNum].balance = balance;
//	strcpy(accArr[accNum].cusName, name);
//	accNum;
//}
//
//void DM()
//{
//	int money;
//	int id;
//	cout << "[입  금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "입금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i].accID == id)
//		{
//			accArr[i].balance += money;
//			cout << "입금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
//}
//
//void WM()
//{
//	int money;
//	int id;
//	cout << "[출  금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "출금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i].accID == id)
//		{
//			if (accArr[i].balance < money)
//			{
//				cout << "잔액부족" << endl << endl;
//				return;
//			}
//
//			accArr[i].balance -= money;
//			cout << "출금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
//}
//
//void SAAI()
//{
//	for ( int i = 0; i < accNum; i++ )
//	{
//		cout << "계좌ID: " << accArr[i].accID << endl;
//		cout << "이 름: " << accArr[i].cusName << endl;
//		cout << "잔 액: " << accArr[i].balance << endl << endl;
//	}
//}
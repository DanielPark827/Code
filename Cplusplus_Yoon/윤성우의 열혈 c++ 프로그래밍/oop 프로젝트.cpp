//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int menu_num = 0;
//	int account_id[10] = { 0 };
//	int count_index = 0;
//	char name[10][5] = { 0 };
//	int money[10] = { 0 };
//	int check_id = 0;
//	int input_money = 0;
//
//	while (true) {
//		cout << "\n----menu----\n" << "1.계좌개설\n" << "2.입금\n" << "3.출금\n" << "4.계좌정보 전체 출력\n" << "5.프로그램 종료\n" << "선택: ";
//
//		cin >> menu_num;
//
//		cout << "\n";
//
//		switch (menu_num)
//		{
//		case 1:
//			cout << "[계좌개설]\n" << "계좌ID: ";
//			cin >> account_id[count_index];
//
//			cout << "\n이름: ";
//			cin >> name[count_index];
//			cout << "\n입금액: ";
//			cin >> money[count_index];
//			count_index++;
//			break;
//		case 2:
//		{
//			cout << "[입  금]\n" << "계좌ID: ";
//			cin >> check_id;
//			cout << "\n입금액: ";
//			cin >> input_money;
//			for (int i = 0; i < 10; i++) {
//				if (check_id == account_id[i]) {
//					money[i] += input_money;
//					cout << "\n입금완료\n";
//					break;
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "[출  금]\n" << "계좌ID: ";
//			cin >> check_id;
//			cout << "\n출금액: ";
//			cin >> input_money;
//			for (int i = 0; i < 10; i++) {
//				if (check_id == account_id[i]) {
//					money[i] -= input_money;
//					cout << "\n입금완료\n";
//				}
//
//				else {
//					cout << "\n출금실패";
//				}
//				break;
//			}
//		case 4:
//		{
//			for (int i = 0; i < count_index; i++) {
//				cout << "게좌ID: " << account_id[i] << "\n이름: " << name[i] << "\n잔액: " << money[i] << endl;
//			}
//			break;
//		}
//
//		case 5:
//			break;
//		default:
//			break;
//			}
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include "배열 기반 리스트.h"
//using namespace std;
//
//int main() {
//	ArrayList list;
//	int data;
//
//	list.LInsert(11);
//	list.LInsert(11);
//	list.LInsert(22);
//	list.LInsert(22);
//	list.LInsert(33);
//
//	cout << "현재 데이터의 수 : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		cout << list.GetData() << "\n";
//
//		while (list.LNext()) {
//			cout << list.GetData() << "\n";
//		}
//	}
//
//	if (list.LFirst()) {
//		if (list.GetData() == 22) {
//			list.LRemove();
//		}
//
//		while (list.LNext()) {
//			if (list.GetData() == 22) {
//				list.LRemove();
//			}
//		}
//	}
//}
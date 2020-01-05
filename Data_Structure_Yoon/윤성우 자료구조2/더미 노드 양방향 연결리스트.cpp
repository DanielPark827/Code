//#include <iostream>
//using namespace std;
//
//#include "더미 노드 양방향 연결 리스트.h"
//
//int main() {
//	DBLinkedList list;
//
//	list.LInsert(1);
//	list.LInsert(2);
//	list.LInsert(3);
//	list.LInsert(4);
//	list.LInsert(5);
//
//	if (list.LFirst()) {
//		cout << list.cur->data << endl;
//
//		while (list.LNext()) {
//			cout << list.cur->data << endl;
//		}
//	}
//
//	if (list.LFirst()) {
//		if (list.cur->data == 3)
//			list.LRemove();
//		while (list.LNext()) {
//			if (list.cur->data == 3)
//				list.LRemove();
//		}
//	}
//
//	if (list.LFirst()) {
//		cout << list.cur->data << endl;
//
//		while (list.LNext()) {
//			cout << list.cur->data << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
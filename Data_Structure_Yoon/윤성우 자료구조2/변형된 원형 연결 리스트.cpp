//#include <iostream>
//using namespace std;
//
//#include "변형된 원형 연결 리스트.h"
//
//
//int main() {
//	CLinkedList list;
//	
//	list.LInsert(1); list.LInsert(2);
//	list.LInsert(3); list.LInsertFront(4);
//	list.LInsertFront(5);
//
//	cout << "현재 데이터 수 : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		if (list.cur->data == 4) {
//			list.LRemove();
//		}
//		
//		while (list.LNext()) {
//			if (list.cur->data == 4) {
//				list.LRemove();
//				break;
//			}
//		}
//	}
//
//	cout << "현재 데이터 수 : " << list.LCount() << "\n";
//
//	system("pause");
//	return 0;
//}
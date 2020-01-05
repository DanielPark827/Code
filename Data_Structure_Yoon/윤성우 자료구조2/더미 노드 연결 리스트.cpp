//#include <iostream>
//using namespace std;
//
//
//#include "더미 노드 연결 리스트.h"
//
////FInsert와 SInsert의 식별자를 찾을 수 없다는 오류가 발생함.
//void FInsert(LinkedList* list,int data) {
//	Node* newNode = new Node(data);
//
//	newNode->next = list->head->next;
//	list->head->next = newNode;
//	(list->NumOfData)++;
//}
//
//void SInsert(LinkedList* list, int data) {
//	Node* newNode = new Node(data);
//	Node* pred = list->head;
//
//	while (pred->next != nullptr && list->comp(data, pred->next->data) != 0) {
//		pred = pred->next;
//	}
//
//	newNode->next = pred->next;
//	pred->next = newNode;
//	(list->NumOfData)++;
//}
//
//int WhoIsPrecede(int d1, int d2) {
//	if (d1 < d2)
//		return 0;
//	else
//		return 1;
//}
//int main() {
//	LinkedList list;
//
//	list.SetSortRule(WhoIsPrecede);
//
//	list.LInsert(11); list.LInsert(11);
//	list.LInsert(22); list.LInsert(22);
//	list.LInsert(33);
//
//	cout << "현재 데이터 수 : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		if (list.cur->data == 22) {
//			list.LRemove();
//		}
//		
//		while (list.LNext()) {
//			if (list.cur->data == 22) {
//				list.LRemove();
//			}
//		}
//	}
//
//	cout << "현재 데이터 수 : " << list.LCount() << "\n";
//
//	return 0;
//}
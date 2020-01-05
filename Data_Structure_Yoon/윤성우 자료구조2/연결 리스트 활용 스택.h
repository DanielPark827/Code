#ifndef __연결리스트활용스택__
#define __연결리스트활용스택__

#include "변형된 원형 연결 리스트.h"


class Stack {
public:
	CLinkedList list;

	bool SIsEmpty() {
		if (list.LCount() == 0)
			return true;
		else
			return false;
	}
	void SPush(int data) {
		list.LInsertFront(data);
	}
	int SPop() {
		int subdata = -99999;
		if (list.LFirst()) {
			subdata = list.LRemove();
		}

		return subdata;
	}
	int SPeek() {
		if (list.LFirst()) {
			return list.cur->data;
		}
	}
};
#endif // !__연결리스트활용스택__

#ifndef __변형된원형연결리스트__
#define __변형된원형연결리스트__

class Node {
public:
	int data;
	Node* next;

	Node() : data(-999999), next(nullptr) {};
	Node(int data) : data(data), next(nullptr) {};
};

class CLinkedList {
public:
	Node* tail, *cur, *before;
	int NumOfData;

	CLinkedList() : tail(nullptr), cur(nullptr), before(nullptr), NumOfData(0) {}
	void LInsertFront(int data) {
		Node* newNode = new Node(data);

		if (tail == nullptr) {
			tail = newNode;
			newNode->next = tail;
		}

		newNode->next = tail->next;
		tail->next = newNode;

		NumOfData++;
	}
	void LInsert(int data) {
		Node* newNode = new Node(data);

		if (tail == nullptr) {
			tail = newNode;
			newNode->next = tail;
		}

		newNode->next = tail->next;
		tail->next = newNode;
		tail = newNode;

		NumOfData++;
	}
	bool LFirst() {
		if (tail == nullptr) {
			return false;
		}
		cur = tail->next;
		before = tail;

		return true;
	}
	bool LNext() {
		if (tail == nullptr) {
			return false;
		}
		before = cur;
		cur = cur->next;
	}
	int LRemove() {
		int subData = cur->data;
		Node* subNode = cur;

		if (cur == tail) {
			if (tail == tail->next) {
				tail = nullptr;
			}
			else {
				tail = before;
			}
		}

		before->next = cur->next;
		cur = before;

		delete subNode;
		NumOfData--;
		return subData;
	}
	int LCount() { return NumOfData; }
};

#endif
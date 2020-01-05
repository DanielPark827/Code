#ifndef __기본연결리스트__
#define __기본연결리스트__

class Node {
public:
	int data;
	Node* next;

	Node() : data(-999999), next(nullptr) {};
	Node(int data) : data(data), next(nullptr) {};
};

class LinkedList {
public:
	Node* head;
	Node* tail;
	Node* cur;
	Node* before;
	int NumOfData;

	LinkedList() : head(nullptr), cur(nullptr), tail(nullptr),before(nullptr), NumOfData(0) {}
	void LInsertFront(int data) {
		Node* newNode = new Node(data);

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			newNode->next = head;
			head = newNode;
		}
	}
	void LInsert(int data) {
		Node* newNode = new Node(data);

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		NumOfData++;
	}
	bool LFirst() {
		if (head == nullptr)
			return false;
		cur = head;
		before = tail;
		return true;
	}
	bool LNext() {
		if (head == nullptr)
			return false;
		cur = cur->next;
		before = before->next;
		return true;
	}
	int LRemove() {
		if (head == nullptr)
			return 0;
		int subData = cur->data;
		Node* subNode = cur;

		before = cur->next;
		delete subNode;
		NumOfData--;
		return subData;
	}
	int LCount() { return NumOfData; }
};

#endif
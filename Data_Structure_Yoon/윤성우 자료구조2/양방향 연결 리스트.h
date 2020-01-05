#ifndef  __양방향연결리스트__
#define __양방향연결리스트__

class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node() : data(-9999999),next(nullptr),prev(nullptr) {};
	Node(int data) : data(data), next(nullptr), prev(nullptr) {};
};

class DLinkedList {
public:
	Node* head, *cur;
	int numofData;

	DLinkedList() : head(nullptr), cur(nullptr), numofData(0) {};
	void LInsert(int data) {
		Node* newNode = new Node(data);

		newNode->next = head;
		if (head != nullptr) {
			head->prev = newNode;
		}
		head = newNode;
		(numofData)++;
	}
	bool LFirst() {
		if (head == nullptr)
			return false;
		cur = head;
		return true;
	}
	bool LNext() {
		if (cur->next == nullptr) {
			return false;
		}
		cur = cur->next;
		return true;
	}
	bool LPrevious() {
		if (cur->prev == nullptr)
			return false;
		cur = cur->prev;
		return true;
	}
	int LCount() { return numofData; }
};
#endif // ! __양방향연결리스트__

#ifndef  __양방향 연결 리스트 기반 덱__
#define __양방향 연결 리스트 기반 덱__

class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node() : data(-9999999), next(nullptr), prev(nullptr) {};
	Node(int data) : data(data), next(nullptr), prev(nullptr) {};
};

class Deque {
public:
	Node* head;
	Node* tail;

	Deque() {
		head = new Node;
		tail = new Node;

		head->next = tail;
		tail->prev = head;
	}
	bool DQIsEmpty() {
		if (head->next == tail)
			return true;
		else
			return false;
	}

	void DQAddFirst(int data) {
		Node* newNode = new Node(data);

		newNode->next = head->next;
		newNode->next->prev = newNode;

		head->next = newNode;
		newNode->prev = head;
	}
	void DQAddLast(int data) {
		Node* newNode = new Node(data);

		newNode->prev = tail->prev;
		tail->prev->next = newNode;

		newNode->next = tail;
		tail->prev = newNode;
	}

	int DQRemoveFirst() {
		int subData = head->next->data;
		Node* subNode = head->next;

		head->next = head->next->next;
		head->next->prev = head;

		delete subNode;
		return subData;
	}
	int DQRemoveLast() {
		int subData = tail->prev->data;
		Node* subNode = tail->prev;

		tail->prev = tail->prev->prev;
		tail->prev->next = tail;

		delete subNode;
		return subData;
	}

	int DQGetFirst() { return head->next->data; }
	int DQGetLast() { return tail->prev->data; }
};
#endif // ! __양방향 연결 리스트 기반 덱__

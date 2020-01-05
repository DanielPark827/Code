#ifndef __연결리스트기반스택__
#define __연결리스트기반스택__

class Node {
public:
	int data;
	Node* next;

	Node() : data(-9999), next(nullptr) {}
	Node(int data) : data(data), next(nullptr) {}
};

class Stack {
public:
	Node* head;

	Stack() : head(nullptr) {}
	bool SIsEmpty() {
		if (head == nullptr)
			return true;
		else
			return false;
	}
	void SPush(int data) {
		Node* newNode = new Node(data);

		newNode->next = head;
		head = newNode;

	}
	int SPop() {
		if (head == nullptr)
			return 0;

		int subData = head->data;
		Node* subNode = head;

		head = head->next;
		delete(subNode);
		return subData;
	}
	int SPeek() { return head->data; }
};
#endif // !__연결리스트기반스택__

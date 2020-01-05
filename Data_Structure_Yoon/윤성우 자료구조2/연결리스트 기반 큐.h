#ifndef __연결리스트 기반 큐__
#define __연결리스트 기반 큐__

#include "기본 연결 리스트.h"

class LQueue {
public:
	Node* front;
	Node* rear;

	LQueue() :front(nullptr),rear(nullptr) {}
	bool QIsEmpty() {
		if (front == nullptr)
			return true;
		else
			return false;
	}
	void Enqueue(int data) {
		Node* newNode = new Node(data);

		if (front == nullptr) {
			front = rear = newNode;
		}
		else {
			rear->next = newNode;
			rear = newNode;
		}
	}
	int Dequeue() {

		if (front == nullptr)
			return 0;
		int subData = front->data;
		Node* subNode = front;
		front = front->next;

		delete subNode;
		return subData;
	}
	int QPeek() {
		return front->data;
	}
};
#endif // !__연결리스트 기반 큐__

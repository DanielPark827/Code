//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* prev;
//	Node* next;
//
//	Node() : data(-1), prev(nullptr), next(nullptr) {}
//	Node(int data) : data(data), prev(nullptr), next(nullptr) {}
//};
//
//class DLinkedList {
//public:
//	Node* head;
//	Node* tail;
//
//	DLinkedList() : head(new Node), tail(new Node) {
//		head->next = tail;
//		tail->prev = head;
//	}
//	bool empty() {
//		if (head->next == tail)
//			return true;
//		else
//			return false;
//	}
//	int front() { return head->next->data; }
//	int back() {
//		return tail->prev->data;
//	}
//	void addFront(int data) {
//		Node* newNode = new Node(data);
//
//		newNode->next = head->next;
//		head->next = newNode;
//	}
//	void addBack(int data) {
//		Node* newNode = new Node(data);
//
//		newNode->prev = tail->prev;
//		tail->prev = newNode;
//	}
//	int removeFront() {
//		Node* subNode = head->next;
//		int subData = subNode->data;
//
//		head->next = subNode->next;
//		subNode->next->prev = head;
//		
//		delete(subNode);
//		return subData;
//	}
//};
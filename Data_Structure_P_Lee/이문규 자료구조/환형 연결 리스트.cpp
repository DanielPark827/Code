//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//
//	Node(int data) : data(data), next(nullptr) {}
//};
//
//class CLinkedList {
//public:
//	Node* cur;
//
//	CLinkedList() : cur(nullptr) {}
//	bool empty() {
//		if (cur == nullptr)
//			return true;
//		else
//			return false;
//	}
//	int back() {
//		return cur->data;
//	}
//	int front() {
//		return cur->next->data;
//	}
//	void advance() {
//		cur = cur->next;
//	}
//	void add(int data) {
//		Node* newNode = new Node(data);
//
//		if (cur == nullptr) {
//			cur = newNode;
//			newNode->next = cur;
//		}
//		else {
//			newNode->next = cur->next;
//			cur->next = newNode;
//		}
//	}
//	int remove() {
//		if (cur == nullptr)
//			return -1;
//		
//		Node* subNode = cur->next;
//		int data = subNode->data;
//
//		cur->next = subNode->next;
//
//		delete subNode;
//		return data;
//	}
//};
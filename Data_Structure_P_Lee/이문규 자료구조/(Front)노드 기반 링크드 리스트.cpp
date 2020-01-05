//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//
//
//	Node(int data) : data(data), next(nullptr) {}
//};
//
//class LinkedList {
//public:
//	Node* head;
//
//	LinkedList() : head(nullptr) {}
//	bool empty() {
//		if (head == nullptr)
//			return true;
//		else
//			return false;
//	}
//	int front() { return head->data; }
//	void addFront(int data) {
//		Node* newNode = new Node(data);
//
//		if (head == nullptr)
//			head = newNode;
//		else {
//			newNode->next = head;
//			head = newNode;
//		}
//	}
//	int removeFront() {
//		if (head == nullptr)
//			return -1;
//		else {
//			Node* subNode = head;
//			head = head->next;
//
//			return subNode->data;
//		}
//	}
//};

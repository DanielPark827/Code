//#include <iostream>
//using namespace std;
//
//class Stack {
//public:
//	int topIndex;
//	int arr[100];
//
//	Stack() : topIndex(-1) {}
//	int size() { return topIndex + 1; }
//	bool empty() { return topIndex == -1; }
//	int top() {
//		if (topIndex == -1)
//			return -1;
//		else {
//			return arr[topIndex];
//		}
//	}
//	void push(int data) {
//		if (topIndex == 99)
//			return;
//		else
//			arr[++topIndex];
//	}
//	int pop() {
//		if (topIndex == -1)
//			return -1;
//		else {
//			return arr[topIndex--];
//
//		}
//	}
//};
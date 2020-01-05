//#include <iostream>
//using namespace std;
//
//class Queue {
//public:
//	int numofData;
//	int front;
//	int rear;
//	int arr[100];
//
//	Queue() : numofData(0), front(0), rear(0)  {}
//	int size() { return numofData; }
//	bool empty() { return numofData == 0; }
//	int front() {
//		if (numofData == 0)
//			return -1;
//		else
//			return arr[front];
//	}
//	void enqueue(int data) {
//		if ((rear + 1) % 100 == front)
//			return;
//		else {
//			numofData++;
//			rear = (rear + 1) % 100;
//			arr[rear] = data;
//		}
//	}
//	int dequeue() {
//		if (numofData == 0)
//			return -1;
//		else {
//			int subData = arr[front];
//			front = (front + 1) % 100;
//			numofData--;
//		}
//	}
//};
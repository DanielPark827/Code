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
//class Array_LinkedList {
//public:
//	int NumofData;
//	int MaxofData;
//	int arr[100];
//
//	Array_LinkedList(int NumofData) : NumofData(NumofData),MaxofData(100) {}
//	// 공통적으로 배열을 다루면서 처리해야할 예외는 인덱스 예외
//	void add(int index, int data) {// add 시 예외 : 배열이 꽉 찼을경우
//		if (NumofData == MaxofData)
//			return;
//		else {
//			//해당 인덱스부터 한칸씩 민후
//			//삽입
//			for (int i = index; i < NumofData; i++) {
//				arr[i + 1] = arr[i];
//			}
//			arr[index] = data;
//		}
//	}
//	int remove(int index) {
//		if (index < 0 || index >= MaxofData)
//			return -1;
//
//		int subData = arr[index];
//		for (int i = index; i < NumofData - 1; i++) {
//			arr[i] = arr[i + 1];
//		}
//
//		return subData;
//	}
//};
//

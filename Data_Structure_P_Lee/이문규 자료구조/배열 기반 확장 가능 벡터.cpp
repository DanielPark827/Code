//#include <iostream>
//using namespace std;
//
//class ArrayVector {
//public:
//	int capacity;
//	int NumofData;
//	int* arr;
//
//	ArrayVector() : capacity(0), NumofData(0), arr(nullptr) {}
//	int size() { return NumofData; }
//	bool empty() { return NumofData == 0; }
//	int at(int idx) {
//		if (idx < 0 || idx >= capacity)
//			return -1;
//		else
//			return arr[idx];
//	}
//	void erase(int idx) {
//		for (int j = idx; j < NumofData-1; i++) {
//			arr[j] = arr[j + 1];
//		}
//		NumofData--;
//	}
//	void reserve(int N) {
//		if (capacity > N)
//			return;
//		int* arr = new int[N];
//		for (int i = 0; i < NumofData; i++) {
//			arr[i] = this->arr[i];
//		}
//		if (this->arr != nullptr)
//			delete this->arr;
//		this->arr = arr;
//		capacity = N;
//	}
//	void insert(int idx, int data) {
//		if (n >= capacity)
//			this->reserve(max(1, 2 * capacity));
//		// 일반적인 insert 과정
//	}
//};
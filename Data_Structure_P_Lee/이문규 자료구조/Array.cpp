//#include <iostream>
//using namespace std;
//
//// add에서 arraysize초과시 랑 printarray 예외처리??
//class Array {
//public:
//	int n;
//	int *arr;
//
//	Array(int size) : n{ 0 }, arr{ new int[size] } {
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;
//		}
//	}
//	int at(int idx) {
//		if (idx < 0 || idx >= n)
//			exit(-1);
//		return arr[idx];
//	}
//	void set(int idx, int X) {
//		if (idx < 0 || idx >= n)
//			exit(-1);
//		else {
//			arr[idx] = X;
//		}
//	}
//	void add(int idx, int num) {
//		if (idx < 0 || idx >= n)
//			exit(-1);
//		else {
//
//			for (int i = idx + 1; i < n; i++) {
//				arr[i + 1] = arr[i];
//			}
//			arr[idx] = num;
//		}
//	}
//	int remove(int idx) {
//		if (idx < 0 || idx >= n)
//			exit(-1);
//		int value = arr[idx];
//		for (int i = idx + 1; i < n; i++) {
//			arr[i-1] = arr[i];
//		}
//		return value;
//	}
//	void printArray() {
//		if (n == 0) exit(-1);
//		else {
//			for (int i = 0; i < n; i++)
//				cout << arr[i] << endl;
//		}
//	}
//};
//
//int main()
//{
//	Array array{ 10 };
//	for (int i = 0; i < 10; i++) {
//		array.set(i,i);
//	}
//	array.printArray();
//	cout << "\n\n";
//	array.remove(3);
//	array.printArray();
//	cout << "\n\n";
//	array.add(3, 100);
//	array.printArray();
//	cout << "\n\n";
//
//	system("pause");
//	return 0;
//}
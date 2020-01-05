//#include <iostream>
//using namespace std;
//
//#include "연결리스트 기반 큐.h"
//
//void RadixSort(int arr[], int num, int maxLen) {
//	LQueue buckets[10];
//
//	int divfac = 1;
//	int radix;
//
//	for (int i = 0; i < maxLen; i++) {
//		for (int j = 0; j < num; j++) {
//			radix = (arr[j] / divfac) % 10;
//
//			buckets[radix].Enqueue(arr[j]);
//		}
//
//		for (int i = 0, j = 0; i < 10; i++) {
//			while (!buckets[i].QIsEmpty())
//				arr[j] = buckets[i].Dequeue();
//		}
//
//		divfac *= 10;
//	}
//}
//
//int main() {
//	int arr[7] = { 13,212,14,7141,10987,6,15 };
//
//	int len = sizeof(arr) / sizeof(int);
//
//	RadixSort(arr, len, 5);
//
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//#include "우선 순위 큐 구현을 위한 힙2.h"
//
//int PriComp(int n1, int n2) {
//	return n2 - n1;
//	//return n1 - n2;
//}
//
//void HeapSort(int arr[], int n, PriorityComp pc)
//{
//	Heap heap(pc);
//
//	for (int i = 0; i < n; i++) {
//		heap.HInsert(arr[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = heap.HDelete();
//	}
//}
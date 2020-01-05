//#include <iostream>
//using namespace std;
//
//#include "우선 순위 큐 구현을 위한 힙2.h"
//
//int DataPriorityComp(char ch1, char ch2)
//{
//	return ch2 - ch1;
//	return ch1 - ch2;
//}
//
//int main()
//{
//	Heap heap(DataPriorityComp);
//	heap.HInsert('A', 1);
//	heap.HInsert('B', 2);
//	heap.HInsert('C', 3);
//	cout << heap.HDelete() << endl;
//	
//	heap.HInsert('A', 1);
//	heap.HInsert('B', 2);
//	heap.HInsert('C', 3);
//	cout << heap.HDelete() << endl;
//	
//	while(!heap.HIsEmpty())
//		cout << heap.HDelete() << endl;
//	
//	system("pause");
//	return EXIT_SUCCESS;
//}
//#include <iostream>
//using namespace std;
//
//int BSearchRecur(int ar[], int first, int last, int target) {
//	int mid;
//	if (first > last) {
//		return -1;
//	}
//	mid = (first + last) / 2;
//
//	if (ar[mid] == target) {
//		return mid;
//	}
//	else if (ar[mid] > target) {
//		BSearchRecur(ar, mid + 1, last, target);
//	}
//	else {
//		BSearchRecur(ar, first, mid - 1, target);
//	}
//}
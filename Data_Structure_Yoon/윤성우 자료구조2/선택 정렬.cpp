//#include <iostream>
//using namespace std;
//
//void SelSort(int arr[], int n) {
//	int maxIdx = -1, temp = -1;
//
//	for (int i = 0; i < n - 1; i++) {
//		maxIdx = i;
//
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] < arr[maxIdx])
//				maxIdx = j;
//		}
//
//		temp = arr[i];
//		arr[i] = arr[maxIdx];
//		arr[maxIdx] = temp;
//	}
//}
//
//int main() {
//	int arr[4] = { 3,4,2,1 };
//
//	SelSort(arr, sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < 4; i++) {
//		cout << arr[i] << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void SWAP(int arr[], int idx1, int idx2) {
//	int temp = arr[idx1];
//	arr[idx1] = arr[idx2];
//	arr[idx2] = temp;
//}
//
//int Partition(int arr[], int left, int right)
//{
//	int pivot = arr[left];
//	int low = left + 1;
//	int high = right;
//
//	while (low > high) {
//		while (pivot >= arr[low] && low <= right)
//			low++;
//		while (pivot <= arr[high] && high >= (left + 1))
//			high--;
//
//		if (low <= high)
//			SWAP(arr, low, high);
//	}
//	SWAP(arr, left, high);
//	return high;
//}
//
//void QuickSort(int arr[], int left, int right) {
//	if (left <= right) {
//		int pivot = Partition(arr, left, right);
//		QuickSort(arr, left, pivot - 1);
//		QuickSort(arr, pivot + 1, right);
//	}
//}
//
//int main() {
//	int arr[7] = { 3,2,4,1,7,6,5 };
//
//	int len = sizeof(arr) / sizeof(int);
//
//	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
//
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << endl;
//
//	return 0;
//}
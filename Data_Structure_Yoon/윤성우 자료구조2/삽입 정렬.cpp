//#include <iostream>
//using namespace std;
//
//void InserSort(int arr[], int n) {
//	int insData;
//
//	for (int i = 1; i < n; i++) {
//		insData = arr[i];
//
//		for (int j = i - 1; j >= 0; j--) {
//			if (arr[j] > insData)
//				arr[j + 1] = arr[j];
//			else
//				break;
//		}
//
//		arr[j + 1] = insData;
//	}
//}
//
//int main() {
//	int arr[5] = { 5,3,2,4,1 };
//
//	InserSort(arr, sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << endl;
//
//	return 0;
//}
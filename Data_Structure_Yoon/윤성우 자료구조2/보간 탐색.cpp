//#include <iostream>
//using namespace std;
//
//int ISearch(int ar[], int first, int last, int target) {
//	int s = -1;
//
//	if (ar[first] > target || ar[last] < target)
//		return -1;
//
//	s = ((double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first)) + first;
//
//	if (ar[s] == target)
//		return s;
//	else if (target < ar[s])
//		return ISearch(ar, first, s - 1, target);
//	else
//		return ISearch(ar, s + 1, last, target);
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//
//	int idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
//	if (idx == -1)
//		cout << "Å½»ö ½ÇÆÐ" << endl;
//	else {
//		cout << idx << endl;
//	}
//
//	return 0;
//}
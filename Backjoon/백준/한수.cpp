#include <iostream>
using namespace std;

int result(int N);
int arr_to_num(int arr[]);

int main() {
	int N = 0;
	cin >> N;

	cout << result(N) << endl;

	return 0;
}
int result(int N) {
	int count = 0;
	int arr[3] = { 1,1,1};
	int d_num = 0;

	for (int i = 1; i < 100; i++) {
		if (i < N) {
			count++;
		}
		else if (i == N) {
			count++;
			return count;
		}
	}// 두자리 수 고려
	//이거 하고 종료 안됐다면 count는 99일거고 N은 최소 100

	for (int i = 1; i < 10; i++) {
		arr[0] = i;
		for (int j = 0; j < 10; j++) {
			arr[1] = arr[0] + j;
			arr[2] = arr[1] + j;
			if (arr[1] > 9 || arr[2] > 9) {
				continue;
			}
			if (N >= arr_to_num(arr)) {
				count++;
			}
		}
	}

	for (int i = 9; i > 0; i--) {
		arr[0] = i;
		for (int j = 1; j < 10; j++) {// n/n/n 겹치지 않게 1부터 시작
			arr[1] = arr[0] - j;
			arr[2] = arr[1] - j;
			if (arr[1] < 0 || arr[2] < 0) {
				continue;
			}
			if (N >= arr_to_num(arr)) {
				count++;
			}
		}
	}

	return count;
}
int arr_to_num(int arr[]) {
	int n = 100;
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		if (arr[i] == -1) {
			break;
		}
		sum += arr[i] * n;
		n /= 10;
	}
	return sum;
}
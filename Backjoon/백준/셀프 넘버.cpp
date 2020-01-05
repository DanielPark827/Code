#include <iostream>
using namespace std;

void num_func(int n, int arr[]);
int next_func(int n);

int main() {
	int arr[10000];
	int sub_arr[10000];
	int next;

	for (int i = 0; i < 10000; i++) {
		arr[i] = i + 1;
	}// 1 ~ 10000까지 저장 완료

	for (int i = 0; i < 10000; i++) {
		sub_arr[i] = i + 1;
	}

	for (int i = 0; i < 10000; i++) {
		
		next = next_func(arr[i]);
		
		if (next > 10000) {
			continue;
		}

		sub_arr[next - 1] = -1;
	}

	for (int i = 0; i < 10000; i++) {
		if (sub_arr[i] == -1) {
			continue;
		}

		cout << arr[i] << endl;
	}

	return 0;
}

void num_func(int n, int arr[]) {
	int count;
	if (n < 10) {
		count = 1;
	}
	else if (n >= 10 && n < 100) {
		count = 2;
	}
	else if (n >= 100 && n < 1000) {
		count = 3;
	}
	else if (n >= 1000) {
		count = 4;
	}

	for (int i = 0; i < count; i++) {
		arr[i] = n % 10;
		n /= 10;
	}
}

int next_func(int n) {
	int next = n;
	int num[4] = { -1,-1,-1,-1 };

	num_func(n, num);
	
	for (int i = 0; i < 4; i++) {
		if (num[i] == -1) {
			break;
		}

		next += num[i];
	}
	return next;
}
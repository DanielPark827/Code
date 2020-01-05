#include <iostream>
using namespace std;

int result(int N, int S, int N_arr[]);

int main() {
	int N = 0, S = 0;
	int N_arr[20];

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> N_arr[i];
	}

	cout << result(N, S, N_arr) << endl;

	return 0;
}
int result(int N, int S, int N_arr[]) {
	int count = 0;
	int sum = 0;
	int flag = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = i; k <= i+j; k++) {
				if (i + j >= N) {
					flag = 1;
					break;
				}
				sum += N_arr[k];
			}
			if (flag == 1) {
				flag = 0;
				break;
			}
			if (sum == S) {
				count++;
			}
			sum = 0;
		}
	}

	return count;
}
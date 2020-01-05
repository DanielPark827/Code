#include <iostream>
#include <vector>
using namespace std;

void swap(int * num1, int * num2);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	int N_arr[100000][2];
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> N_arr[i][0] >> N_arr[i][1];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (N_arr[j][0] == N_arr[j + 1][0]) {
				if (N_arr[j][1] > N_arr[j + 1][1]) {
					swap(&N_arr[j][1], &N_arr[j + 1][1]);
				}
			}
			else {
				if (N_arr[j][0] > N_arr[j + 1][0]) {
					swap(&N_arr[j][0], &N_arr[j + 1][0]);
					swap(&N_arr[j][1], &N_arr[j + 1][1]);
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << N_arr[i][0] << " " << N_arr[i][1] << "\n";
	}

	return 0;
}

void swap(int * num1, int * num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
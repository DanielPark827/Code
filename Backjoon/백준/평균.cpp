#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N = 0;
	long double N_arr[1000] = { 0 };
	long double max = 0;
	long double sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> N_arr[i];
	}

	sort(N_arr, N_arr + N);

	max = N_arr[N - 1];

	for (int i = 0; i < N; i++) {
		sum += (N_arr[i] * 100) / max;
	}

	sum /= N;
	cout << sum << endl;

	return 0;
}
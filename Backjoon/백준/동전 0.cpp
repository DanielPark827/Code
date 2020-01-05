#include <iostream>
using namespace std;

int main()
{
	int N = 0, K = 0;
	int result = 0;
	int arr[10] = { 0 };

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		if (K == 0) {
			break;
		}

		if (arr[i] > K) {
			continue;
		}

		result += K / arr[i];
		K -= arr[i] * (K / arr[i]);
	}

	cout << result << endl;
	return 0;
}
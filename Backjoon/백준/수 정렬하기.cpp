#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int temp = 0;
	int arr[1000] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		for (int i = 0; i < N - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
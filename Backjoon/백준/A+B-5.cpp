#include <iostream>
using namespace std;

int main()
{
	int arr[1000][2] = { 0 };
	int sum[1000] = { 0 };


	for (int i = 0; i < 1000; i++) {
		cin >> arr[i][0] >> arr[i][1];

		if (arr[i][0] == 0 && arr[i][1] == 0) {
			break;
		}

		sum[i] = arr[i][0] + arr[i][1];
	}

	for (int i = 0; i < 1000; i++) {
		if (sum[i] == 0) {
			break;
		}

		cout << sum[i] << endl;
	}

	return 0;
}
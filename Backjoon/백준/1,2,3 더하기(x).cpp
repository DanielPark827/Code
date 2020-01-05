#include <iostream>
using namespace std;

int output(int num);

int main()
{
	int arr[1000] = { 0 };
	int num = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		cout << output(arr[i]) << endl;
	}


	return 0;
}

int output(int num) {
	int result = 1;
	int count = 1;

	if (num % 2 == 0) {
		result++;
	}

	if (num % 3 == 0) {
		result++;
	}

	while (true) {
		if (num - 2 * count <= 0) {
			break;
		}

	}
	



}


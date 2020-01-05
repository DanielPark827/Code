#include <iostream>
using namespace std;

int main()
{
	int arr[8] = { 0 };

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++) {
		if (arr[i] - arr[i + 1] != -1 &&
			arr[i] - arr[i + 1] != 1) {
			cout << "mixed" << endl;
			return 0;
		}
	}

	if (arr[0] == 1) {
		cout << "ascending" << endl;
	}

	if (arr[7] == 1) {
		cout << "descending" << endl;
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr;
	int result_arr[26] = { 0 };
	int index = 0;

	cin >> arr;

	for (int i = 0; i < 26; i++) {
		result_arr[i] = -1;
	}

	for (int i = arr.length() - 1; i >= 0; i--) {
		index = (int)arr[i] - 97;
		result_arr[index] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << result_arr[i] << " ";
	}

	cout << endl;

	return 0;
}
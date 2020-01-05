#include <iostream>
#include <cstring>
using namespace std;

bool check(char arr[]);

int main() {
	char arr[101][101];
	int N = 0;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (check(arr[i])) {
			sum++;
		}
	}

	cout << sum << endl;

	return 0;
}

bool check(char arr[]) {
	bool abc[26] = { false };
	int index = 0;

	for (int i = 0; i < strlen(arr); i++) {
		index = (int)arr[i] - 97;

		if (abc[index] == true) {
			return false;
		}


		if (arr[i] == arr[i + 1]) {
			continue;
		}
		else if (arr[i] != arr[i + 1]) {
			abc[index] = true;
		}
	}

	return true;
}
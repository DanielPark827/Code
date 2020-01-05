#include <iostream>
using namespace std;

int main() {
	char arr[15] = { 0 };
	int sum = 0;

	cin >> arr;

	for (int i = 0; i < 15; i++) {
		if (arr[i] == 0) {
			break;
		}
		
		if ((int)arr[i] >= 65 && (int)arr[i] < 68) {
			sum += 3;
		}
		else if ((int)arr[i] >= 68 && (int)arr[i] < 71) {
			sum += 4;
		}
		else if ((int)arr[i] >= 71 && (int)arr[i] < 74) {
			sum += 5;
		}
		else if ((int)arr[i] >= 74 && (int)arr[i] < 77) {
			sum += 6;
		}
		else if ((int)arr[i] >= 77 && (int)arr[i] < 80) {
			sum += 7;
		}
		else if ((int)arr[i] >= 80 && (int)arr[i] < 84) {
			sum += 8;
		}
		else if ((int)arr[i] >= 84 && (int)arr[i] < 87) {
			sum += 9;
		}
		else if ((int)arr[i] >= 87 && (int)arr[i] <= 90) {
			sum += 10;
		}
		else if (arr[i]=='1') {
			sum += 1;
		}
		else if (arr[i] == '0') {
			sum += 11;
		}
	}

	cout << sum << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	int result[1000] = { 0 };

	int score = 1;
	int sum = 0;
	string arr;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr;

		for (int j = 0; j < arr.length(); j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			else if (arr[j] == 'X') {
				score = 1;
			}

		}
		result[i] = sum;
		sum = 0;
		score = 1;
	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}

	return 0;
}
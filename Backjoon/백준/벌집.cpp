#include <iostream>
using namespace std;

int result(int N);

int main() {
	int N = 0;
	cin >> N;

	cout << result(N) << endl;

	return 0;
}
int result(int N) {
	int add_num = 1;
	int default_num = 2;
	int next_d_num = 0;

	if (N == 1) {
		return 1;
	}
	else {
		if (N < 8) {
			return 2;
		}
		for (int i = 1; i < 1000000000; i++) {
			default_num += (6 * i);
			next_d_num = default_num;
			next_d_num += (6 * (i + 1));
			if (N >= default_num && N < next_d_num) {
				return i + 2;
			}
		}
	}
}
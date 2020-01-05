#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	int index = 0;
	int j = 0;
	int num_mul = 1;
	int sum = 0;
	int M_arr[999] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> M_arr[index];
		index++;
	}

	for (int i = 0; i < M; i++) {
		// i == 0
		if (i == 0) {
			while (true) {
				if ((M_arr[i] * num_mul) > N) {//N보다 더할 수가 크면 종료
					num_mul = 1;
					break;
				}
					sum += M_arr[i] * num_mul;
					num_mul++;
			}
			continue;
		}

		// i != 0
	while (true) {
		if ((M_arr[i] * num_mul) > N) {//N보다 더할 수가 크면 종료
			num_mul = 0;
			break;
		}
		for (j = 0; j < i; j++) {
			if ((M_arr[i] * num_mul) % M_arr[j] == 0) {
				j++;
				break;
			}
		}
		if ((M_arr[i] * num_mul) % M_arr[j-1] == 0) {
			j = 0;
			num_mul++;
			continue;
		}
		sum += M_arr[i] * num_mul;
		num_mul++;
	}
	}

	cout << sum << endl;

	return 0;
}
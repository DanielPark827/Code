#include <iostream>
using namespace std;

int main()
{
	int ori_num1 = 0, ori_num2 = 0;
	int num1 = 0, num2 = 0;
	int num_seat = 100;
	int index = 2;
	int arr_num1[3] = { 0 };
	int arr_num2[3] = { 0 };

	cin >> num1 >> num2;

	ori_num1 = num1;
	ori_num2 = num2;

	for (int i = 2; i >= 0; i--) {
		arr_num1[i] = num1 / num_seat;
		num1 -= arr_num1[i] * num_seat;
		num_seat /= 10;
	}

	num_seat = 100;

	for (int i = 2; i >= 0; i--) {
		arr_num2[i] = num2 / num_seat;
		num2 -= arr_num2[i] * num_seat;
		num_seat /= 10;
	}

	num_seat = 100;

	for (int i = 0; i < 3; i++) {
		num1 += arr_num1[i] * num_seat;
		num_seat /= 10;
	}

	num_seat = 100;

	for (int i = 0; i < 3; i++) {
		num2 += arr_num2[i] * num_seat;
		num_seat /= 10;
	}

	cout << (num1 >= num2 ? num1 : num2) << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int num1 = 0, num2 = 0;
	int min_num = 0, max_num = 0;
	int gcd = 0;
	int num = 0;
	cin >> num1 >> num2;

	min_num = num1 > num2 ? num2 : num1;
    max_num = num1 > num2 ? num1 : num2;

	num = num1 > num2 ? num1 : num2;
	gcd = min_num;

	for (gcd; gcd > 0; gcd--) {
		if (max_num % gcd == 0 && min_num % gcd == 0) {
			cout << gcd << endl;
			break;
		}
	}

	for (int i = 1; i < 10000; i++) {
		if ((num*i) % min_num == 0) {
			cout << num * i << endl;
			break;
		}
	}
	
	return 0;
}
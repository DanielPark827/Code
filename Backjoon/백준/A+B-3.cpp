#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int num1 = 0, num2 = 0;
	int sum[1000] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num1 >> num2;
		sum[i] = num1 + num2;
	}

	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}

	return 0;

}
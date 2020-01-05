#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;

	cin >> num1 >> num2;

	cout << num1 + num2 << "\n" << num1 - num2 << "\n"
		<< num1 * num2 << "\n" << num1 / num2 << "\n" << num1 % num2 << "\n";

	return 0;
}
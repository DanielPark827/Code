#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num = 0, ten = 0, one = 0;
	int cycle = 0;

	cin >> num;

	int num2 = num;

	do {
		if (num2 < 10)
			ten = 0;
		else
			ten = num2 / 10;

		one = num2 % 10;

		num2 = one * 10 + ((ten + one) % 10);

		cycle++;
	} while (num != num2);

	cout << cycle << endl;
	return 0;
}
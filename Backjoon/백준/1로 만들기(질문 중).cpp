#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int counter(int);
bool issqu(int);

int main()
{
	unsigned int num = 0;
	
	cin >> num;

	cout << counter(num) << endl;
	
	
	return 0;
}

int counter(int n)
{
	int count = 0;

	while (n != 1) {
		count++;

		if (issqu(n)) {
			n /= 2;
		}

		else if ((n - 1) % 3 == 0) {
			n -= 1;
		}

		else if (n % 3 == 0) {
			n /= 3;
		}

		else if (n % 2 == 0)	{
			n /= 2;
		}

		else {
			n -= 1;
		}
	}

	return count;
}
bool issqu(int n)
{
	while (n != 1) {
		if (n % 2 != 0) {
			return false;
		}

		n /= 2;
	}

	return true;
}
#include <iostream>
#include <cmath>
using namespace std;

double logB(double x, double base)
{
	return log(x) / log(base);
}

int main()
{
	int N, Kim, Lim;
	int count = 0;

	cin >> N >> Kim >> Lim;

	while (Kim != Lim)
	{
		Kim = (Kim + 1) / 2;
		Lim = (Lim + 1) / 2;
		count++;
	}

	cout << count << "\n";

	return 0;
}
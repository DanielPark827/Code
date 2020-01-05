#include <iostream>
using namespace std;

int main()
{

	int T;
	cin >> T;
	while (T--)
	{
		int sum = 0;
		int minimum = 10000;

		for (int i = 0; i < 7; i++)
		{
			int num;
			cin >> num;

			if (num % 2 != 0)
				continue;
			else
			{
				sum += num;
				if (num < minimum)
					minimum = num;
			}
		}
		cout << sum << ' ' << minimum << "\n";
	}
}
#include <iostream>
using namespace std;

int main()
{
	int first = 0;
	int second = 1;
	int result;

	int n;
	cin >> n;
	
	if (n == 0)
		cout << 0 << "\n";
	else if (n == 1)
		cout << 1 << "\n";
	else
	{
		for (int i = 0; i <= n - 2; i++)
		{
			result = first + second;
			first = second;
			second = result;
		}
		cout << result << "\n";
	}

	return 0;
}
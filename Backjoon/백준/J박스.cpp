#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		//char arr[10][10] = { '#', };
		int N;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			for (int k = 0; k < N; k++)
			{
				if (i == 0 || i == N - 1 || k == 0 || k == N - 1)
					cout << '#';
				else
					cout << 'J';
			}
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int N = -1;
	bool arr[100][100] = { false, };
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int column = 0, row = 0;
		cin >> column >> row;

		for(int i = row-1; i < (row-1) + 10; i++)
			for (int k = column - 1; k < (column - 1) + 10; k++)
			{
				arr[i][k] = true;
			}
	}

	for (int i = 0; i < 100; i++)
		for (int k = 0; k < 100; k++)
		{
			if (arr[i][k] == true)
				result++;
		}

	cout << result << "\n";
	return 0;
}
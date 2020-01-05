#include <iostream>
using namespace std;

int main()
{
	bool arr[100][100] = { false, };
	int result = 0;

	for (int i = 0; i < 4; i++)
	{
		int num[4];
		for (int k = 0; k < 4; k++)
		{
			cin >> num[k];
		}

		for (int j = num[1]-1; j < (num[1]-1)+(num[3] - num[1]); j++)
		{
			for (int k = num[0]-1; k < (num[0]-1) +(num[2] - num[0]); k++)
			{
				if (arr[j][k] == false)
				{
					arr[j][k] = true;
					result++;
				}
			}
		}
	}

	cout << result << "\n";
	return 0;
}
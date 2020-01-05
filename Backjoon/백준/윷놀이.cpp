#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int stomach = 0, back = 0;
		int arr[4];

		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
			if (arr[i] == 0)
				stomach++;
			else
				back++;
		}

		if (stomach == 0)
			cout << 'E' << "\n";
		else if (stomach == 1)
			cout << 'A' << "\n";
		else if (stomach == 2)
			cout << 'B' << "\n";
		else if (stomach == 3)
			cout << 'C' << "\n";
		else if (stomach == 4)
			cout << 'D' << "\n";
	}

	return 0;
}
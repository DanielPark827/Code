#include <iostream>
#include <array>
using namespace std;

int main()
{
	char arr[100];

	for (int i = 0; i < 100; i++)
		arr[i] = -1;

	cin >> arr;

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == -1)
			break;

		if (arr[i] > 96)
			arr[i] -= 32;
		else if (arr[i] < 91)
			arr[i] += 32;
	}

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == -1)
			break;

		cout << arr[i];
	}

	cout << endl;

	return 0;
}
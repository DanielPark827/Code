#include <iostream>
using namespace std;

int main()
{
	char arr[100];
	int result[26];

	
	for (int i = 0; i < 100; i++)
	{
		arr[i] = -1;
	}

	cin >> arr;

	for (int i = 0; i < 26; i++)
	{
		result[i] = 0;
	}

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == -1)
			break;
		const int num = arr[i] - 97;
		result[num] += 1;
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << result[i] << ' ';
	}

	cout << endl;
	return 0;
}
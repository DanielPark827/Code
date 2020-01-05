#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[] = { "","","","","" };
	int max_size = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> str[i];

		if ((unsigned int)max_size < str[i].length())
			max_size = str[i].size();//문제 부분
	}

	for (int i = 0; i < max_size; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			if (str[k].length()-1 < i)
				continue;
			else
				cout << str[k].at(i);
		}
	}
	cout << "\n";

	return 0;
}
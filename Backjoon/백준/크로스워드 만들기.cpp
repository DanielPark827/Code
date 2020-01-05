#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "", str2 = "";
	int str1_cross, str2_cross;
	char matrix[30][30];
	bool flag = false;

	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++)
	{
		if (flag == true)
			break;

		for (int j = 0; j < str2.size(); j++)
		{
			if (str1.at(i) == str2.at(j))
			{
				str1_cross = i;
				str2_cross = j;
				flag = true;
				break;
			}
		}
	}
	
	for (int i = 0; i < str2.size(); i++)
	{
		for (int j = 0; j < str1.size(); j++)
		{
			if (j == str1_cross)
			{
				matrix[i][j] = str2.at(i);
			}
			else if (i == str2_cross)
			{
				matrix[i][j] = str1.at(j);
			}
			else
			{
				matrix[i][j] = '.';
			}
		}
	}

	for (int i = 0; i < str2.size(); i++)
	{
		for (int j = 0; j < str1.size(); j++)
		{
			cout << matrix[i][j];
		}
		cout << "\n";
	}

	return 0;
}
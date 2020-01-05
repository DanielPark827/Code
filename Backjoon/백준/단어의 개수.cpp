#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	bool flag = false;
	int num = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (flag == false && str.at(i) == ' ')
			continue;
		else if (flag == true && str.at(i) == ' ')
		{
			if (str.size() - 1 == i)
				continue;
			else
				num++;
		}
		if (str.at(i) != ' ')
			flag = true;
	}
	if (flag == true)
		cout << num + 1 << "\n";
	else
		cout << 0 << "\n";

	return 0;
}
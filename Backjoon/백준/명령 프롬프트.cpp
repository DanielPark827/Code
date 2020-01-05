#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;

	cin >> N;
	cin >> str;

	N--;

	while (N--)
	{
		string str2;
		cin >> str2;

		for (int i = 0; i < str.size(); i++)
		{
			if (str.at(i) != str2.at(i))
			{
				str.replace(i, 1, "?");
			}
			else
			{
				continue;
			}
		}
	}
	
	cout << str << "\n";

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	while (true)
	{

		int T = 0;
		int column = 0;

		cin >> T;
		cin.ignore();
		if (T == 0)
			break;

		for (int i = 0; i < T; i++)
		{
			string str;
			getline(cin, str);
		
			for (int i = column; i < str.size(); i++)
			{
				if (str.at(i) == ' ')
				{
					column = i;
					break;
				}
				if (i == str.size() - 1)
				{
					column = str.size();
				}
			}
		}
		cout << column+1 << "\n";
	}

	return 0;
}
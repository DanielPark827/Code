#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		if (cin.eof() == true)
			break;
		string str;
		char ch;
		int small = 0, big = 0, num = 0, space = 0;

		getline(cin, str);

		for (int i = 0; i < str.size(); i++)
		{
			ch = str.at(i);

			if (ch >= 97 && ch <= 122)
			{
				small++;
			}
			else if (ch >= 65 && ch <= 90)
			{
				big++;
			}
			else if (ch >= 48 && ch <= 57)
			{
				num++;
			}
			else if (ch == 32)
			{
				space++;
			}
		}
		if(cin.eof() == false)
			cout << small << ' ' << big << ' ' << num << ' ' << space << endl;
	}
}
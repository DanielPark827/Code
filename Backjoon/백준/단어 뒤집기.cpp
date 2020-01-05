#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	while (T--)
	{

		stack<char> s;
		string str = "";
		getline(cin, str);
		

		for (int i = 0; i < str.size(); i++)
		{
			if (str.at(i) == ' ')
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else
			{
				s.push(str.at(i));
			}
		}
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << "\n";
	}
}
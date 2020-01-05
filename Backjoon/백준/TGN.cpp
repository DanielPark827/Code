#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N--)
	{
		int r, e, c, result;
		cin >> r >> e >> c;

		result = r - (e - c);

		if (result > 0)
			cout << "do not advertise\n";
		else if (result == 0)
			cout << "does not matter\n";
		else if(result < 0)
			cout << "advertise\n";
	}

	return 0;
}
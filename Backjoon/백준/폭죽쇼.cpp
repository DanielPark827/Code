#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> cycle;
	int N, C;
	cin >> N >> C;
	bool time[2000000] = { false, };
	int result = 0;
	int sub = N;

	while (sub--)
	{
		int num;
		cin >> num;

		cycle.push_back(num);
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < C; k++)
		{
			if ((k + 1) % cycle[i] == 0 && time[k] == false)
			{
				time[k] = true;
				result++;
			}
			else
				continue;
		}
	}

	cout << result << "\n";
}
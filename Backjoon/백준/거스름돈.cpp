#include <iostream>
using namespace std;

int main()
{
	int money[] = { 500,100,50,10,5,1 };
	int pay, payback;
	int i = 0;
	int num = 0;

	cin >> pay;
	payback = 1000 - pay;
	
	while (payback != 0)
	{
		if (payback - money[i] < 0)
		{
			i++;
			continue;
		}
		num += payback / money[i];
		payback -= money[i] * (payback / money[i]);
	}

	cout << num << "\n";
	return 0;
}
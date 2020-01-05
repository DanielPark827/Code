#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x = 0, y = 0, hap = 0;
	int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> x >> y;

	for (int i = 0; i < x - 1; i++) {
		hap += year[i];
	}
	
	hap += y;
	hap %= 7;

	switch (hap)
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	default:
		break;
	}

	return 0;
}
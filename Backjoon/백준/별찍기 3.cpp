#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = num; j > i; j--) {
			cout << '*';
		}

		cout << "\n";
	}
	return 0;
}
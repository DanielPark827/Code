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
		for (int j = i + 1; j < num; j++) {
			cout << ' ';
		}

		for (int k = 0; k < i + 1; k++) {
			cout << '*';
		}

		cout << "\n";
	}
	return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, m;
	cout << "InputN, M : ";
	cin >> n >> m;
	for (int k = 1; k <= n; k += m) {
		for (int i = 1; i <= 9; i++) {
			for (int j = k; j <= k + (m - 1); j++) {
				if (j > n) break;
				cout << j << "x" << i << "=" << setw(2) << j * i << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
}
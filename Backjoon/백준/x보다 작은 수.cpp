#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int N = 0, X = 0;
	cin >> N >> X;

	int* ptr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> ptr[i];
	}

	for (int i = 0; i < N; i++) {
		if (ptr[i] < X)
			cout << ptr[i] << " ";
	}

	cout << "\n";

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int x = 0;
	int i = 0, count = 0;
	int num_sub = 1;
	int head = 1, tail = 1;

	cin >> x;

	while (x > num_sub) {
		x -= num_sub;
		num_sub += 1;
		count += 1;
	}
	
	if (count % 2 != 0) {
		tail = count + 1;

		for (int i = 0; i < x - 1; i++) {
			tail -= 1;
			head += 1;
		}
	}
	else if (count % 2 == 0) {
		head = count + 1;

		for (int i = 0; i < x - 1; i++) {
			tail += 1;
			head -= 1;
		}
	}
	
	cout << head << "/" << tail << endl;
	return 0;

}
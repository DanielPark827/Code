#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<int> stack;
	int N = 0;
	string str = "";
	int num = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str.compare("push") == 0) {
			cin >> num;
			stack.push(num);
		}
		else {
			if (str.compare("pop") == 0) {
				if (stack.empty()) {
					cout << -1 << endl;
				}
				else {
					cout << stack.top() << endl;
					stack.pop();
				}
			}
			else if (str.compare("size") == 0) {
				cout << stack.size() << endl;
			}
			else if (str.compare("empty") == 0) {
				if (stack.empty()) {
					cout << 1 << endl;
				}
				else {
					cout << 0 << endl;
				}
			}
			else if (str.compare("top") == 0) {
				if (stack.empty()) {
					cout << -1 << endl;
				}
				else {
					cout << stack.top() << endl;
				}
			}
		}
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int sum = 0;
	int i = 0;
	cin >> str;

	while (i < str.length() - 1) {
		if (str[i] == 'c' && str[i + 1] == '=') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'c' && str[i + 1] == '-') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'd' && str[i + 1] == '-') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'l' && str[i + 1] == 'j') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 's' && str[i + 1] == '=') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'z' && str[i + 1] == '=') {
			if (i == str.length() - 3) {
				sum += 2;
				break;
			}
			sum++;
			i += 2;
			continue;
		}
		else if (str[i] == 'd' && str[i + 1] == 'z') {
			if (str[i + 2] == '=') {
				if (i == str.length() - 4) {
					sum += 2;
					break;
				}
				sum++;
				i += 3;
				continue;
			}
		}
		if (i == str.length() - 2) {
			sum += 2;
			break;
		}
		else {
			sum++;
			i += 1;
		}
	}

	cout << sum << endl;
	return 0;
}
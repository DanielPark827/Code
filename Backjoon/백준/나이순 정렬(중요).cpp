#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	cin >> N;

	vector<string> name(N);

	vector<pair<int, int>> age(N);

	for (int i = 0; i < N; i++) {
		cin >> age[i].first >> name[i];
		age[i].second = i;
	}

	sort(age.begin(), age.end());

	for (int i = 0; i < N; i++) {
		cout << age[i].first << " " << name[age[i].second] << "\n";
	}
	return 0;
}
#include <iostream>
#include <functional>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);

		pq.push(num);
	}

	while (!pq.empty())
	{
		printf("%d\n", pq.top());
		pq.pop();
	}

	return 0;
}

#include <iostream>
using namespace std;

long long Fibo(int n);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	cin >> N; //몇 번째 수를 구할지 입력 받습니다

	cout << Fibo(N) << endl;

	return 0;
}
long long Fibo(int n) {
	long long n1 = 1, n2 = 1;
	long long n3 = 0;//n3가 결과값이고 n1과 n2라는 전전항과 전항을 둡니다
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		for (int i = 0; i < n - 2; i++) {
			n3 = n1 + n2;//결과값 도출
			n1 = n2;
			n2 = n3;// n1,n2 갱신
		}
	}

	return n3;
}
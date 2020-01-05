#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

//codesite 답변 참고!!

//int main()
//{
//	int N = 0, sum = 0;//N is the number of digits to input. 
//
//	cin >> N;
//
//	char * ptr = new char[N + 1]; //The number is input as a string
//
//	cin >> ptr;
//
//	for (int i = 0; i < N; i++) {
//		sum += atoi(&ptr[i]); //Each character stored in the array element is converted to a number and added to the variable sum.
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}

//int main()
//{
//	int N = 0, sum = 0, c_num = 0;
//	unsigned long long num = 0;
//
//	cin >> N >> num;
//
//	for (int i = 0; i < N; i++) {
//		if (i == 0) {
//			c_num = num / pow(10, N - 1);
//			sum += c_num;
//			num -= c_num * pow(10, N - 1);
//			continue;
//		}
//
//		c_num = num / pow(10, N - (i + 1));
//		sum += c_num;
//		num -= c_num * pow(10, N - (i + 1));
//	}
//
//	cout << sum << endl;
//	return 0;
//}

int main()
{
	int N = 0, sum = 0;

	cin >> N;

	char * ptr = new char[N + 1];

	cin >> ptr;

	for (int i = 0; i < N; i++) {
		sum += ptr[i] - '0'; // 이 기법 완전 중요!
	}

	cout << sum << endl;
}
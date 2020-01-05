#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	int T = 0, R = 0, index = -1;
	char S[20] = { 0 };
	char S_result[160] = { '\0', };

	cin >> T;

	for (int i = 0; i < T; i++) {//i는 테스트 케이스의 횟수에 해당
		cin >> R >> S;
		for (int j = 0; j < 20; j++) {//문자열 속 하나씩 접근
			if (S[j] == 0) {
				break;
			}
			for (int k = 0; k < R; k++) { // 문자를 반복할 횟수
				++index;
				S_result[index] = S[j];
			}
		}
		index = -1;
		cout << S_result << endl;
		char S_result[160] = { '\0', };
	}

	return 0;
}
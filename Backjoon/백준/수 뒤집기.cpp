#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;

//끝자리가 0으로 끝나는 수들을 뒤집었을 때 나오는 문제
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		char N[7] = { 0, };
		char change[7] = { 0, };
		char result_arr[7] = { 0, };
		bool flag = true;
		int index = 0;
		cin >> N;//테스트 케이스를 입력 받습니다.

		int num1 = atoi(N);//입력받은 테케를 숫자로 변환합니다.

		for (int i = strlen(N) - 1; i >= 0; i--)
		{
			change[index] = N[i];
			index++;
		}//숫자를 뒤집습니다.

		int num2 = atoi(change);//뒤집은 결과를 숫자로 저장합니다.

		int result = num1 + num2;//더합니다.
		sprintf(result_arr, "%d", result);//더한 숫자를 문자열로 바꿉니다.

		index = strlen(result_arr) - 1;
		for (int i = 0; i < strlen(result_arr) / 2; i++)
		{
			if (result_arr[i] != result_arr[index])
				flag = false;
			index--;
		}//대칭되는 수인지 판단합니다.

		if (flag == false)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";

		flag = true;
		index = 0;
	}
}
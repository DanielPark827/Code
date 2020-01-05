//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int num = N;
//	int max = 0;
//	int result = 0;
//	vector<int> arr;
//
//	while (num--)
//	{
//		int num = -1;
//		cin >> num;
//
//		arr.push_back(num);
//	}
//
//	sort(arr.begin(), arr.end());//카드의 수를 입력받은 후 이를 정렬해줍니다.
//
//	for(int i = 0; i < N-2; i++)
//		for(int j = 1; j < N-1; j++)
//			for (int k = 2; k < N; k++)
//			{
//				result = arr[i] + arr[j] + arr[k];//3장의 카드를 뽑아 더합니다.
//				if (result > M)//그 값이 M값보다 크면 그냥 넘깁니다.
//					continue;
//				else
//				{
//					if (result > max)//max값 갱신
//						max = result;
//					else
//						continue;
//				}
//			}
//
//	cout << max << "\n";
//	return 0;
//}
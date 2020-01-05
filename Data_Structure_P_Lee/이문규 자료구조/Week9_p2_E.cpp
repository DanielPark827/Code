//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class PQ
//{
//public:
//	vector<int> arr;
//	int lastIdx;
//
//	void Swap(int i1, int i2)
//	{
//		arr[0] = arr[i1];
//		arr[i1] = arr[i2];
//		arr[i2] = arr[0];
//	}
//	void UpHeap(int idx)
//	{
//		if (Empty() || idx == 1)
//			return;
//
//		int pIdx = idx / 2;
//
//		while (true)
//		{
//			if (arr[idx] < arr[pIdx])
//			{
//				Swap(idx, pIdx);
//				idx = pIdx;
//				pIdx = pIdx / 2;
//			}
//			else
//				break;
//		}
//	}
//	void DownHeap(int idx = 1)
//	{
//		int left = idx * 2;
//		int right = idx * 2 + 1;
//
//		if (right <= lastIdx)
//		{
//			if (arr[left] <= arr[right])
//				if (arr[left] < arr[idx])
//				{
//					Swap(left, idx);
//					DownHeap(left);
//				}
//				else
//					return;
//			else
//			{
//				if (arr[right] < arr[idx])
//				{
//					Swap(right, idx);
//					DownHeap(right);
//				}
//				else
//					return;
//			}
//		}
//		else if (left == lastIdx) {
//			if (arr[idx] > arr[left]) {
//				Swap(idx, left);
//			}
//			return;
//		}
//	}
//	PQ() : lastIdx(0)
//	{
//		arr.push_back(-1);
//	}
//	int Empty()
//	{
//		if (lastIdx == 0)
//			return 1;
//		else
//			return 0;
//	}
//	void Push(int data)
//	{
//		arr.push_back(data);
//		lastIdx++;
//		UpHeap(lastIdx);
//	}
//	void Pop()
//	{
//		Swap(1, lastIdx--);
//		arr.pop_back();
//		DownHeap();
//	}
//	int Top()
//	{
//		if (Empty())
//			return -1;
//
//		return arr[1];
//	}
//	int size() {
//		if (lastIdx <= 0)
//			return 0;
//		else
//			return lastIdx;
//	}
//	void PrintArray()
//	{
//		if (lastIdx <= 0) {
//			cout << -1 << "\n";
//			return;
//		}
//
//		for (int i = 1; i < arr.size(); i++) {
//			cout << arr[i] << ' ';
//		}
//
//		cout << "\n";
//	}
//};
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		PQ p;
//		int N, P;
//		cin >> N >> P;
//
//		while (N--)
//		{
//			int data;
//			cin >> data;
//
//			p.Push(data);
//		}
//
//		cout << p.arr[P] << "\n";
//
//		for (int i = 1; i <= P; i++) {
//			if (i == P) {
//				cout << p.Top() << endl;
//			}
//			else
//				p.Pop();
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Priority_Queue
//{
//private:// 원소를 저장할 arr vector, 마지막 인덱스
//	vector<int> arr;
//	int lastIdx;
//	bool greater;//기본적으로 true라고 생각하면 될듯
//
//private:
//	void Swap(int i1, int i2) // 인자로 들어오는 두 인덱스의 원소 교환
//	{
//		arr[0] = arr[i1];
//		arr[i1] = arr[i2];
//		arr[i2] = arr[0];
//	}
//
//	void UpHeap(int idx) // 힙에 Push를 위해 사용됨
//	{
//		if (Empty() || idx == 1) 
//			return;
//
//		int pIdx = idx / 2; // 부모 노드 설정
//
//		if (greater)
//		{
//			while (true)
//			{
//				if (arr[idx] < arr[pIdx]) // 부모 노드의 값이 크다면 
//				{
//					Swap(idx, pIdx);
//
//					idx = pIdx; // 인덱스 갱신
//					pIdx = pIdx / 2;
//				}
//				else
//					break;
//			}
//		}
//		else
//		{
//			while (true)
//			{
//				if (arr[idx] > arr[pIdx])
//				{
//					Swap(idx, pIdx);
//					idx = pIdx;
//					pIdx = pIdx / 2;
//				}
//				else
//					break;
//			}
//		}
//	}
//
//	void DownHeap(int idx = 1)
//	{
//		int left = idx * 2;
//		int right = idx * 2 + 1;
//
//		if (greater)
//		{
//			if (right <= lastIdx)
//			{
//				if (arr[left] < arr[right]) // 더 작은 쪽을 선택해야 함
//					if (arr[left] < arr[idx])
//					{
//						Swap(left, idx);
//						DownHeap(left);
//					}
//					else
//						return;
//				else
//				{
//					if (arr[right] < arr[idx])
//					{
//						Swap(right, idx);
//						DownHeap(right);
//					}
//					else
//						return;
//				}
//			}
//		}
//		else
//		{
//			if (right <= lastIdx)
//			{
//				if (arr[left] > arr[right])
//					if (arr[left] > arr[idx])
//					{
//						Swap(left, idx);
//						DownHeap(left);
//					}
//					else
//						return;
//				else
//				{
//					if (arr[right] > arr[idx])
//					{
//						Swap(right, idx);
//						DownHeap(right);
//					}
//					else
//						return;
//				}
//			}
//		}
//	}
//public:
//	Priority_Queue(bool g = false)
//	{
//		lastIdx = 0;
//		greater = g;
//		arr.push_back(-1);
//	}
//
//	bool Empty()
//	{
//		if (lastIdx == 0)
//			return true;
//		return false;
//	}
//
//	void Push(int data)
//	{
//		arr.push_back(data); // arr에 데이터 삽입
//		lastIdx++; // lastIdx 올려주기
//		UpHeap(lastIdx);
//	}
//
//	void Pop()
//	{
//		if (Empty())
//			return;
//
//		Swap(1, lastIdx--); // 첫번째 노드와 마지막 인덱스의 노드를 교환
//		arr.pop_back();
//		DownHeap();
//	}
//
//	int Top()
//	{
//		if (Empty())
//			return -1;
//
//		return arr[1];
//	}
//
//	void PrintArray()
//	{
//		for (int i = 1; i < arr.size(); i++)
//			cout << arr[i] << ' ';
//
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Priority_Queue q(true);
//
//	int n;
//
//	cin >> n;
//
//	while (n--)
//	{
//		int n2;
//		cin >> n2;
//
//		q.Push(n2);
//	}
//
//	q.PrintArray();
//
//	while (!q.Empty())
//	{
//		cout << q.Top() << ' ';
//		q.Pop();
//	}
//
//	return 0;
//}
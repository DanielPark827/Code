//#include <iostream>
//using namespace std;
////1) linear searching 2) linear delete 3) double hashing
//
//#define MAX 353333
//#define INUSE 2
//
//int probing = 1;
//
//class Item
//{
//public:
//	int key;
//	Item() {}
//	Item(int key) : key(key) {}
//};
//class HashArray
//{
//public:
//	Item* list;
//	int* flag;
//
//	HashArray(int size)
//	{
//		list = new Item[size + 1];
//		flag = new int[size + 1];
//
//		for (int i = 0; i < size; i++)
//			flag[i] = false;
//	}
//	int hash_code(int key)
//	{
//		return key % MAX;
//	}
//	int hash_code_2(int key)
//	{
//		return 17 - (key % 17);
//	}
//	void linear_probing(int k)
//	{
//		int value, i;
//		value = i = hash_code(k);
//
//		while (flag[i])
//		{
//			i = (i + 1) % MAX;
//			if (i == value)
//				return;
//		}
//		flag[i] = true;
//		Item ins(k);
//		list[i] = ins;
//	}
//	Item* linear_Search(int k)
//	{
//		Item* ret = nullptr;
//		int value, i;
//		value = i = hash_code(k);
//
//		while (flag[i] != false)
//		{
//			if (list[i].key == k)
//			{
//				ret = &list[i];
//				return ret;
//			}
//			i = (i + 1) % MAX;
//			probing++;
//			if (i == value)
//				return;
//
//		}
//		return ret;
//	}
//	Item* linear_Delete(int k)
//	{
//		Item* ret = nullptr;
//		int value, i;
//		value = i = hash_code(k);
//
//		while (flag[i] != false)
//		{
//			if (list[i].key == k)
//			{
//				flag[i] = INUSE;
//				list[i].key = -1;
//				ret = &list[i];
//				return ret;
//			}
//			i = (i + 1) % MAX;
//			probing++;
//
//			if (i == value)
//				return ret;
//		}
//		return ret;
//	}
//	void double_hashing(int k)
//	{
//		int code1 = hash_code(k);
//		int code2 = hash_code_2(k);
//		int i = code1;
//
//		while (flag[i])
//		{
//			i = (i + code2) % MAX;
//			if (i == code1)
//				return;
//		}
//		flag[i] = true;
//		Item ins(k);
//		list[i] = ins;
//	}
//	Item* fouble_hahsing_search(int k)
//	{
//		Item* ret = nullptr;
//		int code1 = hash_code(k);
//		int code2 = hash_code_2(k);
//		int i = code1;
//
//		while (flag[i] != false)
//		{
//			if (list[i].key == k)
//			{
//				ret = &list[i];
//				return ret;
//			}
//			i = (i + code2) % MAX;
//			probing++;
//
//			if (i == code1)
//				return ret;
//		}
//		return ret;
//	}
//	~HashArray()
//	{
//		delete[] list;
//		delete[] flag;
//	}
//};
////int main()
////{
////	int T;
////	cin >> T;
////
////	while (T--)
////	{
////		HashArray h(MAX);
////		int N;
////		cin >> N;
////
////		while (N--)
////		{
////			int data;
////			cin >> data;
////			h.linear_probing(data);
////		}
////
////		int M;
////		cin >> M;
////
////		while (M--)
////		{
////			int data;
////			cin >> data;
////
////			Item* item = h.linear_Search(data);
////			/*Item* item = h.linear_Delete(data);*/
////
////			if (item == nullptr)
////				cout << 0 << ' ' << probing << "\n";
////			else
////				cout << 1 << ' ' << probing << "\n";
////			probing = 1;
////		}
////	}
////	system("pause");
////	return 0;
////}
//int main()
//{
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		HashArray h(MAX);
//		int N;
//		cin >> N;
//
//		while (N--)
//		{
//			int data;
//			cin >> data;
//			h.double_hashing(data);
//		}
//
//		int M;
//		cin >> M;
//
//		while (M--)
//		{
//			int data;
//			cin >> data;
//
//			Item* item = h.fouble_hahsing_search(data);
//			/*Item* item = h.linear_Delete(data);*/
//
//			if (item == nullptr)
//				cout << 0 << ' ' << probing << "\n";
//			else
//				cout << 1 << ' ' << probing << "\n";
//			probing = 1;
//		}
//	}
//	system("pause");
//	return 0;
//}
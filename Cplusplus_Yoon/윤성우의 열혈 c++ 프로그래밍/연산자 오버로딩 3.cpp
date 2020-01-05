//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x),ypos(y) {}
//
//	void * operator new (size_t size)
//	{
//		cout << size << endl;
//		void * adr = new char[size];
//		return adr;
//	}
//	void operator delete (void * adr)
//	{
//		delete[]adr;
//	}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << pos.xpos << ' ' << pos.ypos << endl;
//	return os;
//}
//
//int main()
//{
//
//}
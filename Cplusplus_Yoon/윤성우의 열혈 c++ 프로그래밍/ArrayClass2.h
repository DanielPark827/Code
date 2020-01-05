#ifndef __ARRAYCLASS2_H__
#define __ARRAYCLASS2_H__

#include <iostream>
#include <cstdlib>

using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);
};
ostream& operator<<(ostream& os, const Point& pos)
{
	os << pos.xpos << ' ' << pos.ypos << endl;
	return os;
}

class BCIA
{
	Point * arr;
	int arrlen;
	BCIA(const BCIA& arr) {}
	BCIA& operator=(const BCIA& arr) {}
public:
	BCIA(int len) :arrlen(len)
	{
		arr = new Point[len];
	}
	Point& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	Point& operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	~BCIA()
	{
		delete[]arr;
	}
};
#endif // !__ARRAYCLASS2_H__


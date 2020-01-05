#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << xpos << ' ' << ypos << endl;
	}
	/*Point operator+(const Point &ref)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}*/
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int)
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	friend Point operator+(const Point &ref1, const Point &pos2);
	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int)
	{
		const Point retobj(ref);
		ref.xpos -= 1;
		ref.ypos -= 1;
		return retobj;
	}
	friend ostream& operator<<(ostream&, const Point&);
};

Point operator+(const Point &ref1, const Point &ref2)
{
	Point pos(ref1.xpos + ref2.xpos, ref1.ypos + ref2.ypos);
	return pos;
}
Point& operator--(Point &ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}
ostream& operator<<(ostream& os, const Point& pos)
{
	os << pos.xpos << ' ' << pos.ypos << endl;
	return os;
}

#endif // !


#ifndef __ARRAYCLASS_H__
#define __ARRAYCLASS_H__

#include <iostream>
#include <cstdlib>

class BCIA
{
	int * arr;
	int arrlen;
	BCIA(const BCIA& arr) {}
	BCIA& operator=(const BCIA& arr) {}
public:
	BCIA(int len) :arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int& operator[] (int idx) const
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

void ShowAllData(const BCIA& ref)
{
	int len = ref.GetArrLen();
	for (int idx = 0; idx < len; idx)
		cout << ref[idx] << endl;
}
#endif // !__ARRAYCLASS_H__


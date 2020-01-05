#ifndef __AAABBB_H__
#define __AAABBB_H__

class AAA
{
	int num;
public:
	AAA(int num = 0) : num(num) { cout << "AAA »ý¼ºÀÚ!" << endl; }
	AAA(const AAA&ref) : num(ref.num) { cout << "AAA(const AAA&ref)" << endl; }
	AAA& operator=(const AAA& ref)
	{
		num = ref.num;
		cout << "AAA& operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref) {}
};

class CCC
{
	AAA mem;
public:
	CCC(const AAA& ref) { mem = ref; }
};

#endif
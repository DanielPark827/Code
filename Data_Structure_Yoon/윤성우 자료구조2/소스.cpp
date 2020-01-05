#include <iostream>
using namespace std;

class HeapElem;

class Heap;

int GetParentIDX(int idx) {
	return idx * 2;
}
int GetLChildIDX(int idx) {
	return idx * 2;
}
int GetRChildIDX(int idx) {
	return idx * 2 + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx) {
	if (GetLChildIDX(idx) > ph->NumofData)
		return 0;
	else if (GetLChildIDX(idx) == ph->NumofData)
		return GetLChildIDX(idx);
	else {
		if (ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr)
			return GetRCHildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}

class HeapElem {
public:
	int pr;
	char data;

	HeapElem() :pr(0),data(0) {}
	HeapElem(int pr,char data) :pr(pr),data(data) {}
};

class Heap {
public:
	int NumofData;
	HeapElem heapArr[100];

	Heap() : NumofData(0) {}
	bool HIsEmpty() {
		if (NumofData == 0)
			return true;
		else
			return false;
	}
	void HInsert(char data, int pr) {
		int idx = NumofData + 1;
		HeapElem* nelem = new HeapElem(pr, data);

		while (idx != 1) {

		}
	}
};

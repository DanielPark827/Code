
#ifndef  __우선 순위 큐 구현을 위한 힙__
#define  __우선 순위 큐 구현을 위한 힙__

#define HEAP_LEN 100

class HeapElem;

class Heap;

int GetParentIDX(int idx) {
	return idx / 2;
}
int GetLChildIDX(int idx) {
	return idx * 2;
}
int GetRCHildIDX(int idx) {
	return idx * 2 + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx) {
	if (GetLChildIDX(idx) > ph->NumOfData)
		return 0;
	else if (GetLChildIDX(idx) == ph->NumOfData)
		return GetLChildIDX(idx);
	else {
		if (ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRCHildIDX(idx)].pr)
			return GetRCHildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}

class HeapElem {
public:
	int pr;
	char data;

	HeapElem() : pr(0),data(0) {}
	HeapElem(int pr, char data) : pr(pr),data(data) {}
};

class Heap {
public:
	int NumOfData;
	HeapElem heapArr[HEAP_LEN];

	Heap() : NumOfData(NumOfData) {}
	bool HIsEmpty() {
		if (NumOfData == 0)
			return true;
		else
			return false;
	}

	void HInsert(char data, int pr) {
		int idx = NumOfData + 1;
		HeapElem* nelem = new HeapElem(pr, data);

		while (idx != 1) {
			if (pr < heapArr[GetParentIDX(idx)].pr) {
				heapArr[idx] = heapArr[GetParentIDX(idx)];
				idx = GetParentIDX(idx);
			}
			else
				break;
		}
		heapArr[idx] = *nelem;
		NumOfData += 1;
	}
	char HDelete() {
		char retData = heapArr[1].data;
		HeapElem lastElem = heapArr[NumOfData];

		int parentIdx = 1;
		int childIdx;

		while (childIdx = GetHiPriChildIDX(this, parentIdx))
		{
			if (lastElem.pr <= heapArr[childIdx].pr)
				break;
			heapArr[parentIdx] = heapArr[childIdx];
			parentIdx = childIdx;
		}

		heapArr[parentIdx] = lastElem;
		NumOfData -= 1;
		return retData;
	}
};




#endif // ! __우선 순위 큐 구현을 위한 힙__

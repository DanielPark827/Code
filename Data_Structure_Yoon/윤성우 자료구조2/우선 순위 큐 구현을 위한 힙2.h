#ifndef __우선 순위 큐 구현을 위한 힙2__
#define __우선 순위 큐 구현을 위한 힙2__

#define HEAP_LEN 100

typedef int PriorityComp(char d1, char d2);

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
		if (ph->comp(ph->heapArr[GetLChildIDX(idx)], ph->heapArr[GetRCHildIDX(idx)]) < 0)
			return GetRCHildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}

class Heap {
public:
	PriorityComp* comp;
	int NumOfData;
	char heapArr[HEAP_LEN];

	Heap(PriorityComp pc) : comp(pc),NumOfData(0) {}
	bool HIsEmpty() {
		if (NumOfData == 0)
			return true;
		else
			return false;
	}
	void HInsert(char data, int pr) {
		int idx = NumOfData + 1;

		while (idx != 1) {
			if (comp(data,heapArr[GetParentIDX(idx)]) > 0) {
				heapArr[idx] = heapArr[GetParentIDX(idx)];
				idx = GetParentIDX(idx);
			}
			else
				break;
		}
		heapArr[idx] = data;
		NumOfData += 1;
	}
	char HDelete() {
		char retData = heapArr[1];
		char lastElem = heapArr[NumOfData];

		int parentIdx = 1;
		int childIdx;

		while (childIdx = GetHiPriChildIDX(this, parentIdx))
		{
			if (comp(lastElem, heapArr[childIdx]) >= 0)
				break;
			heapArr[parentIdx] = heapArr[childIdx];
			parentIdx = childIdx;
		}

		heapArr[parentIdx] = lastElem;
		NumOfData -= 1;
		return retData;
	}
};
#endif // !__우선 순위 큐 구현을 위한 힙2__

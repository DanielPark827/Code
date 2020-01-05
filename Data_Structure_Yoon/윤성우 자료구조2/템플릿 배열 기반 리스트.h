#ifndef __템플릿배열기반리스트__
#define __템플릿배열기반리스트__

#define MAX_LEN 1000
template<class T>
class ArrayList {
	T data[MAX_LEN];
	int CurIndex;
	int NumOfData;
public:
	ArrayList() : CurIndex(-1), NumOfData(0) {};
	void LInsert(T* data) {
		if (NumOfData > MAX_LEN) {
			cout << "데이터 저장 불가" << "\n";
			return;
		}
		data[NumOfData] = data;
		NumOfData++;
	}

	bool LFirst() {
		if (NumOfData == 0) {
			cout << "저장된 데이터가 없습니다\n";
			return false;
		}
		CurIndex = 0;
		return true;
	}
	bool LNext() {
		if (CurIndex == NumOfData - 1) {
			cout << "다음 데이터가 존재하지 않습니다\n";
			return false;
		}
		CurIndex++;
		return true;
	}

	T LRemove() {
		if (NumOfData == 0) {
			cout << "더 이상 삭제할 데이터가 없습니다\n";
			return 0;
		}
		T subData = data[CurIndex];
		for (int i = CurIndex; i < NumOfData - 1; i++) {
			data[i] = data[i + 1];
		}
		NumOfData--;
		CurIndex--;
		return subData;
	}
	int LCount() {
		return NumOfData;
	}

};

#endif // !__템플릿배열기반리스트__

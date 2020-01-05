#ifndef __더미노드연결리스트__
#define __더미노드연결리스트__

class Node {
public:
	int data;
	Node* next;

	Node() : data(-999999), next(nullptr) {};
	Node(int data) : data(data), next(nullptr) {};
};

class LinkedList {
public:
	Node* head, *cur, *before;
	int NumOfData;
	int(*comp)(int data1, int data2);

	LinkedList() : cur(nullptr), before(nullptr), NumOfData(0)
	{
		head = new Node;
	}
	void LInsert(int data) {
		if (comp == nullptr)
			FInsert(this,data);
		else
			SInsert(this,data);
	}
	bool LFirst() {
		if (head->next == nullptr) {
			return false;
		}
		else {
			before = head;
			cur = head->next;
			return true;
		}
	}
	bool LNext() {
		if (cur->next == nullptr) {
			return false;
		}
		else {
			before = cur;
			cur = cur->next;
			return true;
		}
	}
	int LRemove() {
		if (head->next == nullptr) {
			cout << "삭제할 데이터가 존재하지 않음\n";
			return -999999;
		}
		else {
			int subData = cur->data;
			Node* subNode = cur;

			before = cur->next;
			cur = before;

			delete subNode;
			NumOfData--;
			return subData;
		}
	}
	int LCount() { return NumOfData; }
	void SetSortRule(int(*comp)(int data1, int data2)) {
		this->comp = comp;
	}

};

#endif
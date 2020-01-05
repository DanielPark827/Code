#ifndef __더미노드양방향연결리스트__
#define __더미노드양방향연결리스트__
class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node() : data(-9999999), next(nullptr), prev(nullptr) {};
	Node(int data) : data(data), next(nullptr), prev(nullptr) {};
};

class DBLinkedList{
public:
	Node* head, *tail, *cur;
	int NumOfData;

	DBLinkedList() : NumOfData(0)
	{
		head = new Node;
		tail = new Node;
		head->next = tail;
		tail->prev = head;
	};
	void LInsert(int data) {
		Node* newNode = new Node(data);
		tail->prev->next = newNode;
		newNode->prev = tail->prev;
		newNode->next = tail;
		tail->prev = newNode;
		(NumOfData)++;
	}
	bool LFirst() {
		if (head->next == tail)
			return false;
		cur = head->next;
		return true;
	}
	bool LNext() {
		if (cur->next == tail)
			return false;
		cur = cur->next;
		return true;
	}
	int LRemove() {
		if (head->next == tail)
			return -9999;
		int subData = cur->data;
		Node* subNode = cur;
		
		cur->next->prev = cur->prev;
		cur->prev->next = cur->next;

		cur = cur->prev;
		delete subNode;
		(NumOfData)--;

		return subData;
	}
	int LCount() {
		return NumOfData;
	}
};
#endif // !__더미노드양방향연결리스트__

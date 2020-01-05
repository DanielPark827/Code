#ifndef __체이닝__
#define __체이닝__

#include "기본 연결 리스트.h"

class Person;

class Slot {
public:
	int Key;
	Person* val;

	Slot(int key, Person* per) : Key(key), val(per) {};
	Slot() {};
};

typedef int HashFunc(int k);

class Table {
	LinkedList tbl[100];
	HashFunc* hf;

	Table(HashFunc* f);
	void TBLInsert(int k, Person* v);
	Person* TBLDelete(int k);
	Person* TBLSearch(int k);
};
#endif // !__체이닝__

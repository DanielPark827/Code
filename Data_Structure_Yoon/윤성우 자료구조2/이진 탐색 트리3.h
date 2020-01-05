#ifndef __이진탐색트리3__
#define __이진탐색트리3__

#include "AVL트리.h"

BTreeNode* BSTInsert(BTreeNode** pRoot, int data) {
	if (*pRoot == nullptr) {
		*pRoot = MakeBTreeNode();
		SetData(*pRoot, data);
	}
	else if (data < GetData(*pRoot)) {
		BSTInsert(&((*pRoot)->left), data);
		*pRoot = Rebalance(pRoot);
	}
	else if (data > GetData(*pRoot)) {
		BSTInsert(&((*pRoot)->right), data);
		*pRoot = Rebalance(pRoot);
	}
	else
		return nullptr;

	return *pRoot;
}
BTreeNode* BSTRemove(BTreeNode** pRoot, int data);
#endif // !__이진탐색트리3__

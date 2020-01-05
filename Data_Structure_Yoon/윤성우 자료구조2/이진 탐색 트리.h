#ifndef __이진 탐색 트리__
#define __이진 탐색 트리__

#include "이진트리 2.h"

void BSTMakeAndInit(BTreeNode** pRoot) {
	*pRoot = nullptr;
}

int BSTGetNodeData(BTreeNode* bst) {
	return GetData(bst);
}

void BSTInsert(BTreeNode** pRoot, int data) {
	BTreeNode* pNode = nullptr;
	BTreeNode* cNode = *pRoot;

	BTreeNode* newNode = MakeBTreeNode();
	SetData(newNode, data);

	while (cNode != nullptr) {
		if (data == GetData(cNode))
			return;
		pNode = cNode;

		if (GetData(cNode) > data)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	if (pNode != nullptr) {
		if (data < GetData(pNode))
			MakeLeftSubTree(pNode, newNode);
		else
			MakeRightSubTree(pNode, newNode);
	}
	else {
		*pRoot = newNode;
	}
}

BTreeNode* BSTSearch(BTreeNode* bst, int target) {
	BTreeNode* cNode = bst;
	int cdata;

	while (cNode != nullptr) {
		cdata = GetData(cNode);

		if (target == cdata)
			return cNode;
		else if (target < cdata)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}
}
#endif // !__이진 탐색 트리__

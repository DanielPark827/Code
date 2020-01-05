#ifndef __이진탐색트리2__
#define __이진탐색트리2__

#include "이진트리 3.h"

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
BTreeNode* BSTRemove(BTreeNode** pRoot, int target) {
	BTreeNode* pvRoot = MakeBTreeNode();
	BTreeNode* pNode = pvRoot;
	BTreeNode* cNode = *pRoot;
	BTreeNode* dNode;

	ChangeRightSubTree(pvRoot, *pRoot);
	
	while (cNode != nullptr && GetData(cNode) != target) {
		pNode = cNode;
		if (target < GetData(cNode))
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	if (cNode == nullptr)
		return nullptr;

	dNode = cNode;

	if (GetLeftSubTree(dNode) == nullptr && GetRightSubTree(dNode) == nullptr) {
		if (GetLeftSubTree(pNode) == dNode)
			RemoveLeftSubTree(pNode);
		else
			RemoveRightSubTree(pNode);
	}

	else if (GetLeftSubTree(dNode) == nullptr || GetRightSubTree(dNode) == nullptr) {
		BTreeNode* dcNode;

		if (GetLeftSubTree(dNode) != nullptr)
			dcNode = GetLeftSubTree(dNode);
		else
			dcNode = GetRightSubTree(dNode);

		if (GetLeftSubTree(pNode) == dNode)
			ChangeLeftSubTree(pNode, dcNode);
		else
			ChangeRightSubTree(pNode, dcNode);
	}

	else {
		BTreeNode* mNode = GetRightSubTree(dNode);
		BTreeNode* mpNode = dNode;
		int delData = -1;

		while (GetLeftSubTree(mNode) != nullptr) {
			mpNode = mNode;
			mNode = GetLeftSubTree(mNode);
		}

		delData = GetData(dNode);
		SetData(dNode, GetData(mNode));

		if (GetLeftSubTree(mpNode) == mNode)
			ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
		else
			ChangeRightSubTree(mpNode, GetRightSubTree(mNode));

		dNode = mNode;
		SetData(dNode, delData);
	}

	if (GetRightSubTree(pvRoot) != *pRoot)
		*pRoot = GetRightSubTree(pvRoot);

	delete pvRoot;
	return dNode;
}
void BSTShowAll(BTreeNode* bst) {

}
#endif // !__이진탐색트리2__

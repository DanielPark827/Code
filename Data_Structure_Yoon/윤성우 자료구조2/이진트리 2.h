#ifndef __이진트리2__
#define __이진트리2__

class BTreeNode {
public:
	int data;
	BTreeNode* left;
	BTreeNode* right;


	BTreeNode() : data(-9999), left(nullptr), right(nullptr) {};
	BTreeNode(int data) : data(data), left(nullptr), right(nullptr) {};
};

BTreeNode* MakeBTreeNode() {
	BTreeNode* newNode = new BTreeNode();
	return newNode;
}
int GetData(BTreeNode* bt) {
	return bt->data;
}
void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt) {
	return bt->left;
}
BTreeNode* GetRightSubTree(BTreeNode* bt) {
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->left != nullptr)
		delete main->left;

	main->left = sub;
}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->right != nullptr)
		delete main->right;

	main->right = sub;
}

typedef void VisitFuncPtr(int data);

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action) {
	if (bt == nullptr)
		return;

	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}
void InorderTraverse(BTreeNode* bt, VisitFuncPtr action) {
	if (bt == nullptr)
		return;

	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);
}
void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action) {
	if (bt == nullptr)
		return;

	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}
#endif // !__이진 트리2__

//#include <iostream>
//using namespace std;
//
//#include "이진 탐색 트리.h"
//
//int main()
//{
//	BTreeNode* bstRoot;
//	BTreeNode* sNode;
//
//	BSTMakeAndInit(&bstRoot);
//
//	BSTInsert(&bstRoot, 1);
//	BSTInsert(&bstRoot, 2);
//	BSTInsert(&bstRoot, 3);
//
//	sNode = BSTSearch(bstRoot, 1);
//
//	if (sNode == nullptr)
//		cout << "탐색 실패" << endl;
//	else {
//		cout << BSTGetNodeData(sNode) << endl;
//	}
//	return 0;
//}
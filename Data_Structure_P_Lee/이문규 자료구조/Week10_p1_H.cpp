//#include <iostream>
//#include <string>
//using namespace std;
//
//int depth;
//
//class Node {
//public:
//	int data;
//	Node* par;
//	Node* left;
//	Node* right;
//
//	Node(int data) : data(data), par(nullptr), left(nullptr), right(nullptr) {}
//	void Insert_L(Node* node) {
//		this->left = node;
//		node->par = this;
//	}
//	void Insert_R(Node* node) {
//		this->right = node;
//		node->par = this;
//	}
//	int Degree(Node* node) {
//		int degree = 0;
//
//		if (node->left != nullptr)
//			degree++;
//		if (node->right != nullptr)
//			degree++;
//		return degree;
//	}
//	int Depth(Node* node) {
//		int depth = 0;
//
//		while (node != nullptr) {
//			depth++;
//			node = node->par;
//		}
//		return depth - 1;
//	}
//};
//
//class Tree {
//public:
//	Node* root;
//	int height;
//	int checkh = 0;
//	Tree() :root(nullptr), height(0) {}
//	~Tree()
//	{
//		this->treeDestructor(root);
//	}
//
//	void Insert(Node* &node, int data)
//	{
//		bool flag = false;
//
//		if (node == nullptr) {
//			node = new Node(data);
//			if (checkh > this->height) {
//				this->height = checkh;
//			}
//			checkh = 0;
//		}
//		else if (node->data < data) {
//			if (node->right == nullptr)
//				flag = true;
//			checkh++;
//			Insert(node->right, data);
//
//			if (flag)
//				node->right->par = node;
//		}
//		else if (node->data > data) {
//			if (node->left == nullptr)
//				flag = true;
//			checkh++;
//			Insert(node->left, data);
//			if (flag)
//				node->left->par = node;
//		}
//	}
//	Node* Search(int target)
//	{
//		Node* cur = root;
//		while (cur != nullptr) {
//			if (cur->data == target)
//				return cur;
//			else {
//				if (cur->data > target)
//					cur = cur->left;
//				else
//					cur = cur->right;
//			}
//		}
//		return nullptr;
//	}
//	void treeDestructor(Node* node) {
//		if (node == nullptr)
//			return;
//
//		if (node->left != nullptr)
//			treeDestructor(node->left);
//		if (node->right != nullptr)
//			treeDestructor(node->right);
//		delete node;
//	}
//};
//
//int main() {
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		Tree tree;
//
//		int M;
//		cin >> M;
//
//		while (M--)
//		{
//			int data;
//			cin >> data;
//
//			tree.Insert(tree.root,data);
//		}
//
//		cout << tree.height << "\n";
//	}
//	system("pause");
//	return 0;
//}
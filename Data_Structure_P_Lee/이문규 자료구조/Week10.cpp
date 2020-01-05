//#include <iostream>
//#include <string>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* par, *left, *right;
//
//	Node(int data) : data(data),par(nullptr),left(nullptr),right(nullptr) {}
//	void Insert_L(Node* node) {
//		this->left = node;
//		node->par = this;
//	}
//	void Insert_R(Node* node) {
//		this->right = node;
//		node->par = this;
//	}
//	int Degree() {
//		int degree = 0;
//
//		if (left != nullptr)
//			degree++;
//		if (right != nullptr)
//			degree++;
//		return degree;
//	}
//	int Depth() {
//		int depth = 0;
//		Node* node = this;
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
//	Tree() : root(nullptr), height(0) {}
//	~Tree()
//	{
//		this.treeDes(root);
//	}
//	void Insert(Node* &node, int data)
//	{
//		bool flag = false;
//
//		if (node == nullptr) {
//			node = new Node(data);
//			if (checkh > this->height) {
//				this->height = checkh;
//			}
//		}
//		else if (node->data < data) {
//			if (node->right == nullptr)
//				flag = true;
//			checkh++;
//			Insert(node->right, data);
//			if (flag)
//				node->right->par = node;
//		}
//		else if (node->data > data) {
//			if (node->left == nullptr)
//				flag = true;
//			checkh++;
//			Insert(node->left, data);
//
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
//	void Remove(Node* node, int data) {
//		Node* cur = root;
//
//		while (cur != nullptr) {
//			if (cur->data == data)
//				break;
//			else if (cur->data > data)
//				cur = cur->left;
//			else if (cur->data < data)
//				cur = cur->right;
//		}
//		if (cur == nullptr)
//			return;
//
//		Node* delNode = new Node(0);
//		if (Empty()) {
//			delete node;
//			node = nullptr;
//			delete delNode;
//		}
//		if (둘중 하나만) {
//			delNode = node;
//			node = node->right;
//			delete delNode;
//		}
//		else {
//			delNode = node->right;
//			while (delNode->left != nullptr)
//				delNode = delNode->left;
//
//			int min = delNode->data;
//
//			Remove(root, min);
//			node->data = min;
//		}
//	}
//};
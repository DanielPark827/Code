//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* left, *right;
//	Node(int data) : data(data), left(nullptr), right(nullptr) {}
//};
//
//class Tree {
//public:
//	void Insert(Node* &node, int data) {
//		if (node == nullptr)
//			node = new Node(data);
//		else if (data > node->data)
//			Insert(node->right, data);
//		else if (data < node->data)
//			Insert(node->left, data);
//	}
//	void Remove(Node* &node, int data) {
//		Node* subNode = new Node(0);
//
//		if (node == nullptr)
//			return;
//		else if (data > node->data)
//			Remove(node->right, data);
//		else if (data < node->data)
//			Remove(node->left, data);
//
//		else {
//			if (node->left == nullptr && node->right == nullptr) {
//				delete node;
//			}
//			else if (node->left == nullptr) {
//				subNode = node;
//				node = node->right;
//				delete subNode;
//			}
//			else if (node->right == nullptr) {
//				subNode = node;
//				node = node->left;
//				delete subNode;
//			}
//			else {
//				subNode = node->right;
//				while (subNode->left != nullptr)
//					subNode = subNode->left;
//
//				int minval = subNode->data;
//				Remove(root, minval);
//				node->data = minval;
//			}
//		}
//	}
//	Node* Search(Node* node, int data) {
//		if (node->data == data)
//			return node;
//		else if (node->data < data)
//			Search(node->right, data);
//		else if (node->data > data)
//			Search(node->left, data);
//	}
//	void preorder(Node* node) {
//		if (node == nullptr)
//			return;
//		else {
//			cout << node->data << endl;
//			preorder(node->left);
//			preorder(node->right);
//		}
//	}
//	void postorder(Node* node) {
//		if (node == nullptr)
//			return;
//		else {
//			preorder(node->left);
//			cout << node->data << endl;
//			preorder(node->right);
//		}
//	}
//	void Inorder(Node* node) {
//		if (node == nullptr)
//			return;
//		else {
//			preorder(node->left);
//			preorder(node->right);
//			cout << node->data << endl;
//		}
//	}
//
//	Node* root;
//	Tree() :root(nullptr) {}
//};
//
//int main() {
//	Tree tree;
//	int N;
//	cin >> N;
//
//	while (N--) {
//		int data;
//		cin >> data;
//
//		tree.Insert(tree.root, data);
//	}
//	
//	tree.preorder(tree.root);
//
//	for (int i = 0; i < 5; i++) {
//		int data;
//		cin >> data;
//
//		tree.Remove(tree.root, data);
//		tree.preorder(tree.root);
//	}
//}

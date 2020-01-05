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
//	void Remove(Node* &node, int data) {
//		if (node == NULL) {
//			return;
//		}
//		else if (data < node->data) {
//
//			Remove(node->left, data);
//		}
//
//		else if (data > node->data) {
//
//			Remove(node->right, data);
//		}
//
//		else {
//
//			Node* removal = new Node(0);
//
//			if (node->left == NULL && node->right == NULL) {
//
//				delete node;
//				node = NULL;
//				delete removal;
//			}
//			else  if (node->left == NULL) {
//
//				removal = node;
//				node = node->right;
//
//				delete removal;
//
//			}
//
//			else  if (node->right == NULL) {
//
//				removal = node;
//				node = node->left;
//
//				delete removal;
//
//			}
//
//			else {
//
//				removal = node->right;
//				while (removal->left != NULL) {
//					removal = removal->left;
//				}
//
//				int temp = removal->data;
//
//				Remove(root, temp);
//				node->data = temp;
//
//			}
//
//		}
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
//	void Preorder(Node* node) {
//		if (node == nullptr)
//			return;
//
//		cout << node->data << ' ';
//		Preorder(node->left);
//		Preorder(node->right);
//	}
//	void Inorder(Node* node) {}
//};
//
//int main() {
//	Tree tree;
//	int M;
//	cin >> M;
//
//	while (M--) {
//		int data;
//		cin >> data;
//
//		tree.Insert(tree.root, data);
//	}
//
//	int N;
//	cin >> N;
//	while (N--) {
//
//		int data;
//		cin >> data;
//
//		tree.Remove(tree.root,data);
//
//		tree.Preorder(tree.root);
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* parrent;
//	Node* rChild;
//	Node* lChild;
//
//	Node() {
//		this->data = NULL;
//		this->parrent = NULL;
//		this->rChild = NULL;
//		this->lChild = NULL;
//	}
//	Node(int data) {
//		this->data = data;
//		this->parrent = NULL;
//		this->rChild = NULL;
//		this->lChild = NULL;
//	}
//	~Node() {
//	}
//	void insertlChild(Node* lChild) {
//		this->lChild = lChild;
//		lChild->parrent = this;
//	}
//	void insertrChild(Node* rChild) {
//		this->rChild = rChild;
//		rChild->parrent = this;
//	}
//	int printDegree(Node* node) {
//
//		int ret = 0;
//		if (node->lChild != NULL) {
//			ret++;
//		}
//		if (node->rChild != NULL) {
//			ret++;
//		}
//
//		return ret;
//
//	}
//	int printDepth(Node* node) {
//
//		int ret = 0;
//
//		while (node != NULL) {
//			ret++;
//			node = node->parrent;
//		}
//
//		return ret;
//	}
//};
//
//class BST {
//public:
//	Node* root;
//	int height;
//	BST() {
//		root = NULL;
//		height = 0;
//	}
//	~BST() {
//		this->treeDestructor(this->root);
//	}
//	void insertNode(Node* &node, int dat) {
//		int height = 0;
//		bool flag = false;
//		if (node == NULL) {
//
//			node = new Node(dat);
//
//		}
//		else if (dat > node->data) {
//			if (node->rChild == NULL) {
//				flag = true;
//			}
//			insertNode(node->rChild, dat);
//
//			if (flag) {
//				node->rChild->parrent = node;
//			}
//
//
//		}
//
//		else if (dat < node->data) {
//			if (node->lChild == NULL) {
//				flag = true;
//			}
//			insertNode(node->lChild, dat);
//			if (flag) {
//				node->lChild->parrent = node;
//			}
//		}
//	}
//	Node* findNode(int data) {
//		Node* tmp = root;
//		while (tmp != NULL) {
//			if (tmp->data == data)
//				return tmp;
//			else {
//				if (tmp->data < data)
//					tmp = tmp->rChild;
//				else
//					tmp = tmp->lChild;
//			}
//		}
//		return NULL;
//	}
//	int printHeight(Node* node) {
//
//
//	}
//	void deleteNode(Node* &node, int dat) {
//
//
//
//		if (node == NULL) {
//			return;
//		}
//
//		else if (dat < node->data) {
//
//			deleteNode(node->lChild, dat);
//		}
//
//		else if (dat > node->data) {
//
//			deleteNode(node->rChild, dat);
//		}
//
//		else {
//
//			Node* removal = new Node(0);
//
//			if (node->lChild == NULL && node->rChild == NULL) {
//
//				delete node;
//				node = NULL;
//				delete removal;
//			}
//
//			else  if (node->lChild == NULL) {
//
//				removal = node;
//				node = node->rChild;
//
//				delete removal;
//
//			}
//
//			else  if (node->rChild == NULL) {
//
//				removal = node;
//				node = node->lChild;
//
//				delete removal;
//
//			}
//
//			else {
//
//				removal = node->rChild;
//				while (removal->lChild != NULL) {
//					removal = removal->lChild;
//				}
//
//				int temp = removal->data;
//
//				deleteNode(root, temp);
//				node->data = temp;
//
//			}
//
//		}
//
//	}
//
//
//
//	Node* findMinimum(Node* node) {}
//	void printPreorderTraversal(Node* node) {
//		if (node == NULL)
//			return;
//
//		cout << node->data << " ";
//		printPreorderTraversal(node->lChild);
//		printPreorderTraversal(node->rChild);
//
//
//	}
//
//	void printinorderTraversal(Node* node) {
//
//		if (node == NULL)
//			return;
//		printinorderTraversal(node->lChild);
//		cout << node->data << " ";
//		printinorderTraversal(node->rChild);
//
//	}
//
//
//	void treeDestructor(Node* root) {
//		if (root == NULL)
//			return;
//
//		if (root->lChild != NULL)
//			this->treeDestructor(root->lChild);
//		if (root->rChild != NULL)
//			this->treeDestructor(root->rChild);
//		delete(root);
//	}
//
//	void insert(int dat) {
//		insertNode(root, dat);
//	}
//};
//
//int main() {
//
//	int N;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//
//		BST bst;
//
//		int cnt;
//		cin >> cnt;
//
//		for (int j = 0; j < cnt; j++) {
//			int a;
//			cin >> a;
//			bst.insert(a);
//		}
//		int temp;
//		cin >> temp;
//
//		for (int j = 0; j < temp; j++) {
//			int a;
//			cin >> a;
//			bst.deleteNode(bst.root, a);
//
//		}
//
//		bst.printPreorderTraversal(bst.root);
//
//
//
//	}
//	system("pause");
//
//	return 0;
//}
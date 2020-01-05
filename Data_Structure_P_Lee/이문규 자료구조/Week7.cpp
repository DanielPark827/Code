//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Tree;
//
//vector<int> dirsize;
//
//class Node {
//public:
//	int data;
//	Node* parent;
//	vector<Node*> child;
//
//	Node(int data = 0) : data(data), parent(nullptr) {}
//	void setParent(Node* p) {
//		parent = p;
//		return;
//	}
//	void insertChild(Node* node) {
//		child.push_back(node);
//		return;
//	}
//	void delChild(Node* node) {
//		for (int i = 0; i < child.size(); i++) {
//			if (child[i] == node)
//				child.erase(child.begin() + i);
//			return;
//		}
//	}
//};
//
//class Tree {
//public:
//	Node* root;
//	vector<Node*> node_list;
//	int tree_size;
//
//	Tree(int data = 1) {
//		root = new Node(data);
//		node_list.push_back(root);
//	}
//	void Insert(int p_data, int data)
//	{
//		Node* p = nullptr;
//
//		for(auto &i : node_list)
//			if (i->data == p_data)
//			{
//				p = i;
//				Node* newNode = new Node(data);
//				p->insertChild(newNode);
//				newNode->setParent(p);
//				node_list.push_back(newNode);
//				return;
//			}
//
//		cout << "-1" << endl;
//		return;
//	}
//	void delNode(int data)
//	{
//		Node* cur;
//		Node* p;
//
//		for (int i = 0; i < node_list.size(); i++)
//		{
//			if (node_list[i]->data == data)
//			{
//				cur = node_list[i];
//				p = cur->parent;
//
//				for (auto &child : cur->child)
//				{
//					p->insertChild(child);
//					child->setParent(p);
//				}
//
//				p->delChild(cur);
//				node_list.erase(node_list.begin() + i);
//				delete cur;
//			}
//		}
//
//		return;
//	}
//	void printChild(int data)
//	{
//		for (auto &i : node_list)
//		{
//			if (i->data == data)
//			{
//				if (i->child.size() == 0)
//				{
//					cout << 0 << "\n";
//					return;
//				}
//				for (auto &c : i->child)
//					cout << c->data << ' ';
//
//				cout << "\n";
//				return;
//			}
//		}
//
//		cout << -1 << endl;
//		return;
//	}
//	int countDepth(int data)
//	{
//		Node* cur = nullptr;
//		int depth = 0;
//		bool flag = false;
//
//		for (auto &i : node_list)
//		{
//			if (i->data == data)
//			{
//				flag = true;
//				cur = i;
//
//				while (true)
//				{
//					if (cur == root)
//						return depth;
//					cur = cur->parent;
//					depth++;
//				}
//			}
//		}
//		if (!flag)
//			return -1;
//		else
//			return depth;
//	}
//	void Preorder(Node* node)
//	{
//		cout << node->data << ' ';
//		for (auto &i : node->child)
//			Preorder(i);
//	}
//	int Postorder(Node* node)
//	{
//		for (auto &i : node->child)
//			dirsize.push_back(Postorder(i));
//
//		if (node->data == 1)
//			dirsize.push_back(node->data);
//
//		return node->data;
//	}
//};
//
//int main() //2¹ø
//{
//
//	int n;
//	cin >> n;
//
//	while (n--)
//	{
//		Tree tree(1);
//
//		int m;
//		cin >> m;
//
//		while (m--) {
//			int d1, d2;
//			cin >> d1 >> d2;
//
//			tree.insertnode(d1, d2);
//		}
//
//
//		tree.preorder(tree.root);
//		cout << "\n";
//
//		tree.postorder(tree.root);
//
//		for (auto& num : dirsize) {
//			cout << num << ' ';
//		}
//		cout << "\n";
//
//		dirsize.clear();
//
//		cout << tree.height(tree.root) << endl;
//		max = 0;
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//int main() // 1¹ø
//{
//	Tree tree(1);
//
//	int N;
//	cin >> N;
//
//	while (N--) {
//		string str;
//		cin >> str;
//
//		if (str == "insert") {
//			int p_data, c_data;
//
//			cin >> p_data >> c_data;
//			tree.Insert(p_data, c_data);
//		}
//		else if (str == "printChild") {
//			int data;
//			cin >> data;
//
//			tree.printChild(data);
//		}
//		else if (str == "printDepth") {
//			int data;
//			cin >> data;
//
//			cout << tree.countDepth(data) << "\n";
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Tree;
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
//	void insertChild(Node* ch) {
//		child.push_back(ch);
//		return;
//	}
//	void deleteChild(Node* ch) {
//		for (int i = 0; i < child.size(); i++) {
//			if (child[i] == ch)
//				child.erase(child.begin() + i);
//		}
//		return;
//	}
//};
//
//class Tree {
//public:
//	Node* root;
//	vector<Node*> node_list;
//	int tree_size;
//
//	Tree(int data = 0) {
//		root = new Node(data);
//		node_list.push_back(root);
//	}
//	void insertNode(int parent_data, int data)
//	{
//		Node* p;
//
//		for(auto &i : this->node_list)
//			if (i->data == parent_data)
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
//	void deleteNode(int data)
//	{
//		Node* curNode;
//		Node* p;
//
//		for (int i = 0; i < node_list.size(); i++)
//		{
//			if (node_list[i]->data == data)
//			{
//				curNode = node_list[i];
//				p = curNode->parent;
//
//				for (auto &child : curNode->child)
//				{
//					p->insertChild(child);
//					child->setParent(p);
//				}
//
//				p->deleteChild(curNode);
//				node_list.erase(node_list.begin() + i);
//				delete curNode;
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
//					cout << '0' << endl;
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
//		cout << "-1" << endl;
//		return;
//	}
//	Node* getRoot() { return root; }
//	void setRoot(int data) {
//		if (root != nullptr)
//			delete root;
//		root = new Node(data);
//		node_list.push_back(root);
//	}
//	int countDepth(int data)
//	{
//		Node* curNode;
//		int depth = 0;
//		bool flag = false;
//
//		for (auto &i : this->node_list)
//		{
//			if (i->data == data)
//			{
//				flag = true;
//				curNode = i;
//
//				while (true)
//				{
//					if (curNode == root)
//						return depth;
//
//					curNode = curNode->parent;
//					depth++;
//				}
//			}
//		}
//		if (!flag)
//			return -1;
//		else
//			return depth;
//	}
//	void preorder(Node* node)
//	{
//		cout << node->data << " ";
//
//		for (auto &i : node->child)
//			preorder(i);
//	}
//	void postorder(Node* node)
//	{
//		for (auto &i : node->child)
//			preorder(i);
//
//		cout << node->data << " ";
//	}
//};
//
//int main()
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
//			tree.insertNode(p_data, c_data);
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
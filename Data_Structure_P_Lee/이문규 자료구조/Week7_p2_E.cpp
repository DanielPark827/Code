//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class tree;
//
//vector<int> dirsize;
//int max;
//
//class node {
//public:
//	int data;
//	node* parent;
//	vector<node*> child;
//
//	node(int data = 0) : data(data), parent(nullptr) {}
//	void setparent(node* p) {
//		parent = p;
//		return;
//	}
//	void insertchild(node* ch) {
//		child.push_back(ch);
//		return;
//	}
//	void deletechild(node* ch) {
//		for (int i = 0; i < child.size(); i++) {
//			if (child[i] == ch)
//				child.erase(child.begin() + i);
//		}
//		return;
//	}
//};
//
//class tree {
//public:
//	node* root;
//	vector<node*> node_list;
//	int tree_size;
//
//	tree(int data = 0) {
//		root = new node(data);
//		node_list.push_back(root);
//	}
//	void insertnode(int parent_data, int data)
//	{
//		node* p;
//
//		for (auto &i : this->node_list)
//			if (i->data == parent_data)
//			{
//				p = i;
//				node* newnode = new node(data);
//				p->insertchild(newnode);
//				newnode->setparent(p);
//				node_list.push_back(newnode);
//				return;
//			}
//
//		cout << "-1" << endl;
//		return;
//	}
//	void deletenode(int data)
//	{
//		node* curnode;
//		node* p;
//
//		for (int i = 0; i < node_list.size(); i++)
//		{
//			if (node_list[i]->data == data)
//			{
//				curnode = node_list[i];
//				p = curnode->parent;
//
//				for (auto &child : curnode->child)
//				{
//					p->insertchild(child);
//					child->setparent(p);
//				}
//
//				p->deletechild(curnode);
//				node_list.erase(node_list.begin() + i);
//				delete curnode;
//			}
//		}
//
//		return;
//	}
//	void printchild(int data)
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
//	node* getroot() { return root; }
//	void setroot(int data) {
//		if (root != nullptr)
//			delete root;
//		root = new node(data);
//		node_list.push_back(root);
//	}
//	int countdepth(int data)
//	{
//		node* curnode;
//		int depth = 0;
//		bool flag = false;
//
//		for (auto &i : this->node_list)
//		{
//			if (i->data == data)
//			{
//				flag = true;
//				curnode = i;
//
//				while (true)
//				{
//					if (curnode == root)
//						return depth;
//
//					curnode = curnode->parent;
//					depth++;
//				}
//			}
//		}
//		if (!flag)
//			return -1;
//		else
//			return depth;
//	}
//	void preorder(node* node)
//	{
//		cout << node->data << " ";
//
//		for (auto &i : node->child)
//			preorder(i);
//	}
//	int postorder(node* node)
//	{
//		for (auto &i : node->child) {
//			dirsize.push_back(postorder(i));
//		}
//
//		/*if (node->child.size() == 0)
//			return node->data;
//*/
//		if (node->data == 1)
//			dirsize.push_back(node->data);
//
//		return node->data;
//	}
//	int height(node* node) {
//		for (auto &i : node->child) {
//			int num = height(i);
//			if (max < num)
//				max = num;
//
//		}
//
//		return max + 1;
//	}
//};
//
//
//int main()
//{
//
//	int n;
//	cin >> n;
//
//	while (n--)
//	{
//		tree tree(1);
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
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class DoublyEdgeLinkedList;

class vertex {
public:
	DoublyEdgeLinkedList *incidentEdgeList;
	int degree = 0;
	int data;
	bool visited = false;
	vertex *prev;
	vertex *next;
	vertex(int data);
	void increase_degree() {
		this->degree++;
	}
	void decrease_degree() {
		this->degree--;
	}
};

class edge {
public:
	edge* prev;
	edge* next;
	edge* myselfInFisrtincidentEdge;
	edge* myselfInSecondincidentEdge;
	edge* myselfInTotalEdgeList;
	vertex* source;
	vertex* destination;
	string word;
	bool explore;
	bool discovery;
	bool back;
	edge(vertex* a, vertex* b, string word) {
		this->source = a;
		this->destination = b;
		this->myselfInFisrtincidentEdge = NULL;
		this->myselfInSecondincidentEdge = NULL;
		this->myselfInTotalEdgeList = NULL;
		this->word = word;
		this->explore = false;
		this->discovery = false;
		this->back = false;
	}
};

class DoublyEdgeLinkedList {
public:
	edge *head;
	edge *tail;
	int size;
	DoublyEdgeLinkedList() {
		this->head = NULL;
		this->tail = NULL;
		this->size = 0;
	}
	void insert(edge *insertEdge) {
		if (this->head == NULL) {
			head = insertEdge;
			tail = insertEdge;
		}
		else {
			tail->next = insertEdge;
			insertEdge->prev = tail;
			tail = insertEdge;
		}
		this->size++;
	}
	void remove(edge *delEdge) {

		if (delEdge == head || delEdge == tail) {
			if (delEdge == head && delEdge != tail) {
				edge *temp = head;
				head = head->next;
				head->prev = NULL;
				delete temp;

			}
			else if (delEdge == tail && delEdge != head) {
				edge *temp = tail;
				tail = tail->prev;
				tail->next = NULL;
				delete temp;

			}
			else { head = tail = NULL; }
		}
		else {
			delEdge->prev->next = delEdge->next;
			delEdge->next->prev = delEdge->prev;
			delete delEdge;
		}
		this->size--;
	}
};

vertex::vertex(int data) {
	this->degree = 0;
	this->data = data;
	this->incidentEdgeList = new DoublyEdgeLinkedList();
}

class DoublyVertexLinkedList {
public:
	vertex *head;
	vertex *tail;
	int size;
	DoublyVertexLinkedList() {
		this->head = NULL;
		this->tail = NULL;
		this->size = 0;
	}
	void insert(vertex *insertVertex) {
		if (this->head == NULL) {
			head = insertVertex;
			tail = insertVertex;
		}
		else {
			tail->next = insertVertex;
			insertVertex->prev = tail;
			tail = insertVertex;
		}
		this->size++;
	}
	void remove(vertex *delVertex) {
		if (delVertex == head || delVertex == tail) {
			if (delVertex == head && delVertex != tail) {
				vertex *temp = head;
				head = head->next;
				head->prev = NULL;
				delete temp;
			}
			else if (delVertex == tail && delVertex != head) {
				vertex *temp = tail;
				tail = tail->prev;
				tail->next = NULL;
				delete temp;
			}
			else { head = tail = NULL; }
		}
		else {
			delVertex->prev->next = delVertex->next;
			delVertex->next->prev = delVertex->prev;
			delete delVertex;
		}
		this->size--;
	}
};

class graph {
public:
	DoublyVertexLinkedList* TotalvertexList;
	DoublyEdgeLinkedList* TotaledgeList;
	int vertexSize;
	int maxSize;
	graph() {
		this->vertexSize = 0;
		this->TotalvertexList = new DoublyVertexLinkedList();
		this->TotaledgeList = new DoublyEdgeLinkedList();
	}
	bool isFindVertex(int data) {
		vertex *tempVertex;
		bool flag = false;
		tempVertex = TotalvertexList->head;
		while (tempVertex != NULL) {
			if (tempVertex->data == data)
			{
				flag = true; break;
			}
			tempVertex = tempVertex->next;
		}
		return flag;
	}
	vertex* findVertex(int data) {
		vertex *tempVertex;
		tempVertex = TotalvertexList->head;
		while (tempVertex != NULL) {
			if (tempVertex->data == data)
			{
				break;
			}
			tempVertex = tempVertex->next;
		}
		return tempVertex;
	}
	bool isFindEdge(int source, int destination) {
		edge* tempEdge;
		bool flag = false;
		tempEdge = TotaledgeList->head;
		while (tempEdge != NULL) {
			if (tempEdge->source->data == source && tempEdge->destination->data == destination ||
				tempEdge->source->data == destination && tempEdge->destination->data == source)
			{
				flag = true; break;
			}
			tempEdge = tempEdge->next;
		}
		return flag;
	}

	edge* findEdge(int source, int destination) {
		edge* tempEdge;
		tempEdge = TotaledgeList->head;
		while (tempEdge != NULL) {
			if (tempEdge->source->data == source && tempEdge->destination->data == destination ||
				tempEdge->source->data == destination && tempEdge->destination->data == source)
			{
				break;
			}
			tempEdge = tempEdge->next;
		}
		return tempEdge;
	}

	void insert_vertex(int n) {
		if (isFindVertex(n) == true)return;
		else {
			vertex* newVertex = new vertex(n);
			TotalvertexList->insert(newVertex);
			this->vertexSize++;
		}
	}
	void insert_edge(int source, int destination, string word) {
		if (isFindVertex(source) == true && isFindVertex(destination) == true) {
			vertex* srcVertex = findVertex(source);
			vertex* dstVertex = findVertex(destination);
			edge* newEdge = new edge(srcVertex, dstVertex, word);		//totaledgelist에 추가될 newedge

			TotaledgeList->insert(newEdge);

			edge* tempEdge1 = new edge(srcVertex, dstVertex, word);		//src.incidentedges 에 추가될 new edge
			edge* tempEdge2 = new edge(srcVertex, dstVertex, word);
			tempEdge1->myselfInTotalEdgeList = newEdge;
			tempEdge2->myselfInTotalEdgeList = newEdge;

			srcVertex->incidentEdgeList->insert(tempEdge1);
			dstVertex->incidentEdgeList->insert(tempEdge2);
			newEdge->myselfInFisrtincidentEdge = tempEdge1;
			newEdge->myselfInSecondincidentEdge = tempEdge2;

			srcVertex->increase_degree();
			dstVertex->increase_degree();
		}
		else return;
	}

	void erase_edge(int source, int destination) {
		if (isFindEdge(source, destination) == false)return;
		else {
			edge *delEdge = findEdge(source, destination);
			vertex* srcVertex = findVertex(source);
			vertex* dstVertex = findVertex(destination);

			srcVertex->incidentEdgeList->remove(delEdge->myselfInFisrtincidentEdge);
			dstVertex->incidentEdgeList->remove(delEdge->myselfInSecondincidentEdge);

			srcVertex->decrease_degree();
			dstVertex->decrease_degree();

			TotaledgeList->remove(delEdge);
		}
	}
		bool isAdj(int temp1, int temp2) {			//고유번호 temp1, temp2를 가진 vertex가 서로 인접한지 유무 check!!

		bool flag = false;
		vertex *start = findVertex(temp1);
		edge *temp = start->incidentEdgeList->head;
		for (int i = 0; i < start->incidentEdgeList->size; i++, temp = temp->next) {
			if (temp->destination->data == temp2 || temp->source->data == temp2) { flag = true; break; }
		}
		return flag;
	}
};
void DFS(graph* g, int data)
{

	vector<vertex*> stack;
	vertex* sub = NULL;
	sub = g->findVertex(data);

	stack.push_back(sub);
	sub->visited = true;
	cout << sub->data << " ";// 인자로 들어온 정점은 방문

	while (!stack.empty())
	{
		vertex* cur = stack.back();
		stack.pop_back();
		edge* e = cur->incidentEdgeList->head;

		while (true)
		{
			vertex* opposite = NULL;
			if (e->source == cur)
			{
				opposite = e->destination;
			}
			else
			{
				opposite = e->source;
			}//opposite

			if (opposite->visited == false)
			{
				if (e->myselfInTotalEdgeList->discovery == false && e->myselfInTotalEdgeList->back == false)
				{
					e->myselfInTotalEdgeList->discovery = true;
				}
				cout << opposite->data << " ";
				opposite->visited = true;
				stack.push_back(cur);
				stack.push_back(opposite);
				break;
			}
			else
			{
				if (e->myselfInTotalEdgeList->discovery == false && e->myselfInTotalEdgeList->back == false)
				{
					e->myselfInTotalEdgeList->back = true;
				}
			}
			e = e->next;
			if (e == NULL)
			{
				break;
			}
		}
	}

}
void BFS(graph* g, int data)
{
	vertex* cur = g->TotalvertexList->head;

	while (cur->next != NULL)// 모든 vertex의 visited를 false로 초기화
	{
		cur->visited = false;
		cur = cur->next;
	}

	vector<vertex*> q;
	vertex* sub = g->findVertex(data);
	q.push_back(sub);
	sub->visited = true;

	while (!q.empty())
	{
		vertex* cur = q.front();
		q.erase(q.begin());
		cout << cur->data << "\n";
		edge* e = cur->incidentEdgeList->head;

		while (true)
		{
			vertex* opposite = NULL;
			if (e->source == cur)
			{
				opposite = e->destination;
			}
			else
			{
				opposite = e->source;
			}//opposite

			if (opposite->visited == false)
			{
				e->discovery = true;
				q.push_back(opposite);
			}
			
			e = e->next;
			if (e == NULL)
				break;
		}

	}
}
int main()
{
	graph g;
	int N, M, A;
	cin >> N >> M >> A;

	while (N--)
	{
		int data;
		cin >> data;

		g.insert_vertex(data);
	}

	while (M--)
	{
		int data1, data2;
		string str;
		cin >> data1 >> data2 >> str;

		if (g.isAdj(data1, data2))
		{
			cout << -1 << "\n";
		}
		else
		{
			g.insert_edge(data1, data2, str);
		}
	}

	DFS(&g, A);
	cout << "\n";
	
	edge* cur = g.TotaledgeList->head;
	while (cur != NULL)
	{
		if (cur->discovery == true)
		{
			cout << cur->word << " ";
		}
		cur = cur->next;
	}
	cout << "\n";

	cur = g.TotaledgeList->head;
	while (cur != NULL)
	{
		if (cur->back == true)
		{
			cout << cur->word << " ";
		}
		cur = cur->next;
	}
	cout << "\n";

	system("pause");
	return 0;
}
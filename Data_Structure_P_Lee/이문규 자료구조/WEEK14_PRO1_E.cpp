#include<iostream>
#include<string>
#include<vector>
using namespace std;

class DoublyEdgeLinkedList;

class vertex {									//vertex class에 대하여	
public:
	DoublyEdgeLinkedList *incidentEdgeList;     //임의의 모든 vertex A는 A와 incident 한 모든 edge들을 이중링크드리스트로 가지고 있다.
	int degree = 0;		//vertex A의 차수
	int data;			//vertex A의 고유번호
	bool visited;       //vertex A가 방문 되었는지 여부
	vertex *prev;       //vertex 한개를 이중연결리스트(vertexLinkedList)를 구성하는 하나의 노드로 볼수 있기 때문
	vertex *next;		//위와 동일한 이유
	vertex(int data);
	void increase_degree() {	//vertex A의 차수를 1증가
		this->degree++;
	}
	void decrease_degree() {	//vertex A의 차수를 1감소
		this->degree--;
	}
};

class edge {
public:
	edge* prev;			//edge 한개를 이중연결리스트(edgeLinkedList)를 구성하는 하나의 노드로 볼수 있기 때문
	edge* next;			//위와 동일한 이유
	edge* myself_InFisrt_incidentEdge;	//임의의 vertex A와 incident한 edge E가 있다고 하자. 이때 E는 A.incidentEdgeList에도 존재(E1)하고, 그래프 전체에서 관리하는 TotalEdgeLinkedList(E2)에도 존재한다. 
	edge* myself_InSecond_incidentEdge;	//이 때, E1과 E2가 바로 O(1)시간에 서로 참조할수있게 포인터를 유지한다. 13주차실습 강의노트 21페이지에서 회색원이 보라색으로 표현된 엣지들로 가는 주황색 화살표 : myself_InTotal_EdgeList, 
	edge* myself_InTotal_EdgeList;		//보라색으로 표현된 엣지에서 회색원으로 나가는  두개의 주황색 화살표 : myself_InFisrt_incidentEdge, myself_InSecond_incidentEdge
	vertex* source;						//엣지를 정의하는 source, destination 두개의 vertex
	vertex* destination;
	bool discovery;						//해당 엣지가 discovery edge인지
	bool back;							//또는 해당 엣지가 back edge인지
	edge(vertex* a, vertex* b) {
		this->source = a;
		this->destination = b;
		this->myself_InFisrt_incidentEdge = NULL;
		this->myself_InSecond_incidentEdge = NULL;
		this->myself_InTotal_EdgeList = NULL;
		this->discovery = false;
		this->back = false;
	}
};

class DoublyEdgeLinkedList {		//엣지들로 이루어진 이중연결리스트(실습 3주차때 배운거임. )
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
	this->visited = false;
	vertex *prev = NULL;
	vertex *next = NULL;
	this->incidentEdgeList = new DoublyEdgeLinkedList();
}

class DoublyVertexLinkedList {		//vertex들로 이루어진 이중연결리스트(실습 3주차때 배운거임. )
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
	DoublyVertexLinkedList* TotalvertexList;			//그래프에 존재하는 모든 vertex를 관리하는 이중연결리스트
	DoublyEdgeLinkedList* TotaledgeList;				//그래프에 존재하는 모든 edge를 관리하는 이중연결리스트
	int vertexSize;		//현재 vertex 의 개수
	graph() {
		this->vertexSize = 0;
		this->TotalvertexList = new DoublyVertexLinkedList();
		this->TotaledgeList = new DoublyEdgeLinkedList();
	}
	bool isFindVertex(int data) {		//고유번호가 data인 vertex가 VertexLinkedList에 존재하는지 유무 반환
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
	vertex* findVertex(int data) {			//고유번호가 data인 vertex가 VertexLinkedList에 존재하면 해당 vertex의 주소값 반환
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
	bool isFindEdge(int source, int destination) {	//고유번호가 source와 destination인 vertex로 만들어진 edge가 edgeLinkedList에 존재하는지 유무 반환
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

	edge* findEdge(int source, int destination) {	//고유번호가 source와 destination인 vertex로 만들어진 edge가 edgeLinkedList에 존재한다면 해당 edge주소 반환
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

	void insert_vertex(int n) {						//고유번호가 n인 vertex를 그래프에 삽입
		if (vertexSize != 0) {
			if (isFindVertex(n) == true)return;
			else {
				vertex* newVertex = new vertex(n);
				TotalvertexList->insert(newVertex);
				this->vertexSize++;
			}
		}
		else {
			vertex* newVertex = new vertex(n);
			TotalvertexList->insert(newVertex);
			this->vertexSize++;
		}
	}

	void insert_edge(int source, int destination) {
		if (isFindVertex(source) == true && isFindVertex(destination) == true) {
			vertex* srcVertex = findVertex(source);
			vertex* dstVertex = findVertex(destination);
			edge* newEdge = new edge(srcVertex, dstVertex);		//totaledgelist에 추가될 새로운 edge (E1)

			TotaledgeList->insert(newEdge);

			edge* tempEdge1 = new edge(srcVertex, dstVertex);		//src.incidentedges 에 추가될 새로운 edge (E2) 
			edge* tempEdge2 = new edge(srcVertex, dstVertex);		//destination.incidentedges에 추가될 새로운 edge(E3)
			tempEdge1->myself_InTotal_EdgeList = newEdge;			//E1,E2와 E3는 주소값자체는 다르지만 각자 가지고 있는 모든 field값은 같다. 
			tempEdge2->myself_InTotal_EdgeList = newEdge;			//실습강의노트 21페이지에서 어던 주황색 화살표들이 E1,E2,E3에 해당되는지 이해하시면 됩니다.

			srcVertex->incidentEdgeList->insert(tempEdge1);
			dstVertex->incidentEdgeList->insert(tempEdge2);
			newEdge->myself_InFisrt_incidentEdge = tempEdge1;
			newEdge->myself_InSecond_incidentEdge = tempEdge2;

			srcVertex->increase_degree();
			dstVertex->increase_degree();
		}
		else {
			return;
		}
	}
	void erase_edge(int source, int destination) {
		if (isFindEdge(source, destination) == false)return;
		else {
			edge *delEdge = findEdge(source, destination);
			vertex* srcVertex = findVertex(source);
			vertex* dstVertex = findVertex(destination);

			srcVertex->incidentEdgeList->remove(delEdge->myself_InFisrt_incidentEdge);
			dstVertex->incidentEdgeList->remove(delEdge->myself_InSecond_incidentEdge);

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
				cout << opposite->data << " ";
				opposite->visited = true;
				stack.push_back(cur);
				stack.push_back(opposite);
				break;
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
				q.push_back(opposite);
				opposite->visited = true;
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
		cin >> data1 >> data2;

		if (g.isAdj(data1, data2))
		{
			cout << -1 << "\n";
		}
		else
		{
			g.insert_edge(data1, data2);
		}
	}

	DFS(&g, A);
	cout << "\n";

	system("pause");
	return 0;
}
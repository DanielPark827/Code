#ifndef __BFS__
#define __BFS__

#include "무방향 그래프.h"
#include "기본 연결 리스트.h"
#include "배열 기반 원형 큐.h"

enum { A, B, C, D, E, F, G, H, I, J };

class ALGraph {
public:
	int numV;
	int numE;
	LinkedList* adjList;
	int* visitInfo;

	ALGraph(int nv) : numV(nv), numE(0) {
		adjList = new LinkedList[nv];
		visitInfo = new int[nv]; // DFS 구현하면서 기존의 무방향 그래프 코드에서 추가된 것

		memset(visitInfo, 0, sizeof(int)*numV);
	}
	void GraphDestroy() {
		if (adjList != nullptr)
			delete adjList[];

		if (visitInfo != nullptr)// DFS 구현하면서 기존의 무방향 그래프 코드에서 추가된 것
			delete visitInfo;
	}
	void AddEdge(int fromV, int toV) {

	}
	void ShowGraphEdgeInfo();
	bool VisitVertex(int visitV) {
		if (visitInfo[visitV] == 0) {
			visitInfo[visitV] = 1;
			//방문한 정점의 이름을 출력
			return true;
		}
		return false;
	}
	void BFShowGraphVertax(int startV) {
		CQueue queue;
		int visitV = startV;
		int nextV;

		this->VisitVertex(visitV);

		while (adjList[startV].LFirst() == true) {
			nextV = adjList[startV].cur->data;

			if (this->VisitVertex(nextV) == true)
				queue.Enqueue(nextV);

			while (adjList[visitV].LNext() == true) {
				if (this->VisitVertex(nextV) == true)
					queue.Enqueue(nextV);
			}

			if (queue.QISEmpty() == true)
				break;
			else
				visitV = queue.Dequeue();
		}

		memset(visitInfo, 0, sizeof(int)*numV);
	}
	
};
#endif // !__BFS__

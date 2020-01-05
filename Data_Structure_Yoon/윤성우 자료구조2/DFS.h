#ifndef __DFS__
#define __DFS__

#include "기본 연결 리스트.h"
#include "배열 기반 스택.h"

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
	void DFShowGraphVertax(int startV) {
		Stack stack;
		int visitV = startV;
		int nextV;

		this->VisitVertex(visitV);
		stack.SPush(visitV);

		while (adjList[visitV].LFirst() == true) {
			int visitFlag = false;

			if (this->VisitVertex(nextV) == true) {
				stack.SPush(visitV);
				visitV = nextV;
				visitFlag = true;
			}
			else {
				while (adjList[visitV].LNext() == true) {
					if (this->VisitVertex(nextV) == true) {
						stack.SPush(visitV);
						visitV = nextV;
						visitFlag = true;
						break;
					}
				}
			}

			if (visitFlag == false) {
				if (stack.SIsEmpty() == true)
					break;
				else
					visitV = stack.SPop();
			}
		}
	}
	bool VisitVertex(int visitV) {
		if (visitInfo[visitV] == 0) {
			visitInfo[visitV] = 1;
			//방문한 정점의 이름을 출력
			return true;
		}
		return false;
	}
	void DFSShowGraphVertex(int startV) {
		Stack stack;
		int visitV = startV;
		int nextV = -1;

		this->VisitVertex(visitV);
		stack.SPush(visitV);

		while (adjList[visitV].LFirst() == true) {
			nextV = adjList[visitV].LFirst();
			int visitFlag = false;

			if (this->VisitVertex(nextV) == true) {
				stack.SPush(visitV);
				visitV = nextV;
				visitFlag = true;
			}
			else {
				while (adjList[visitV].LNext() == true) {
					nextV = adjList[visitV].cur->data;

					if (this->VisitVertex(nextV) == true) {
						stack.SPush(visitV);
						visitV = nextV;
						visitFlag = true;
						break;
					}
				}
			}
			if (visitFlag == false) {
				if (stack.SIsEmpty() == true)
					break;
				else
					visitV = stack.SPop();
			}
		}
		memset(visitInfo, 0, sizeof(int)*numV);
		
	}
};


#endif
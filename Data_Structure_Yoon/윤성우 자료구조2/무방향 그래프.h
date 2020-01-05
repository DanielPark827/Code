#ifndef __무방향그래프__
#define __무방향그래프__

#include "기본 연결 리스트.h"

enum {A,B,C,D,E,F,G,H,I,J};

class ALGraph {
public:
	int numV;
	int numE;
	LinkedList* adjList;
	
	AlGraph(int numV) : numV(numV), numE(0), adjList(new int[numV]) {
		//정점의 수만큼 리스트 배열 for문으로 돌면서 초기화 ex) 정렬 관련 함수
	}
	void GraphDestroy() {
		if (adjList != nullptr)
			delete adjList;
	}
	void AddEdge(int fromV, int toV) {
		adjList[fromV].LInsert(toV);
		adjList[toV].LInsert(fromV);
		numE += 1;
	}
	viud ShowGraphEdgeInfo() {
		for (int i = 0; i < numV; i++) {
			// A부터 연결된 정점 연속으로 출력
		}
	}
};
#endif // !__무방향그래프__

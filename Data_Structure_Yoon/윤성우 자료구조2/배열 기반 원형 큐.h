#ifndef __배열기반원형큐__
#define __배열기반원형큐__

#define QUE_LEN 100

int NextPosIdx(int pos) {
	if (pos == QUE_LEN - 1)
		return 0;
	else
		return pos + 1;
}

class CQueue
{
public:
	int front;
	int rear;
	int arr[QUE_LEN];

	CQueue() : front(0), rear(0) {}
	bool QISEmpty() {
		if (front == rear)
			return true;
		else
			return false;
	}
	void Enqueue(int data) {
		if (NextPosIdx(rear) == front) {
			exit(-1);
		}
		
		rear = NextPosIdx(rear);
		arr[rear] = data;
	}
	int Dequeue() {
		if (rear==front)
			exit(-1);

		front = NextPosIdx(front);
		return arr[front];
	}
	int QPeek() {
		if (rear = front) {
			exit(-1);
		}

		return arr[NextPosIdx(front)];
	}
};
#endif // !__배열기반원형큐__

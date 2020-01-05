//#include <iostream>
//using namespace std;
//
//#include "템플릿 배열 기반 리스트.h"
//
//class Point {
//	int xpos;
//	int ypos;
//public:
//	Point(int xpos,int ypos):xpos(xpos),ypos(ypos) {}
//};
//
//int main() {
//	ArrayList<Point> list;
//	int data;
//
//	list.LInsert(new Point(1,1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	
//
//	cout << "현재 데이터의 수 : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		cout << list.GetData() << "\n";
//
//		while (list.LNext()) {
//			cout << list.GetData() << "\n";
//		}
//	}
//
//	if (list.LFirst()) {
//		if (list.GetData() == 22) {
//			list.LRemove();
//		}
//
//		while (list.LNext()) {
//			if (list.GetData() == 22) {
//				list.LRemove();
//			}
//		}
//	}
//}
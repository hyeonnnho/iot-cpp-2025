///*
//	static : 클래스 멤버(this 포인터가 없다), 객체들이 공유한다.
//*/
//#include <iostream>
//
//class StaticTest {
//private:
//public:
//	int n;
//	static int static_n;				// static 멤버 변수
//	StaticTest();
//	void print();
//};
//
//int StaticTest::static_n = 10;			// static 멤버변수 초기화는 클래스 외부에서 이루어져야한다.
//StaticTest::StaticTest() {
//	n = 20;
//	//static_n = 10;
//}
//void StaticTest::print() {
//	std::cout << "Static_n: " << static_n << "\tn: " << n << std::endl;
//}
//int main()
//{
//
//	StaticTest obj1, obj2;
//	obj1.print();
//	obj2.print();
//
//	obj2.static_n = 1000;
//	obj2.n = 50;
//	obj2.print();
//	obj1.print();						// 값이 같이 바뀜
//
//	return 0;
//}
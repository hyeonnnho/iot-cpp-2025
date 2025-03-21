///*
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
//	MyClass(int ax, int ay) :x(ax), y(ay) {
//		printf("생성자\n");
//	}
//	MyClass(const MyClass& other) {
//		printf("복사 생성자\n");
//		x = other.x;
//		y = other.y;
//	}
//
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//	MyClass add(const MyClass& other) {
//		printf("add 메서드\n");
//		//x = x + other.x;
//		//y = y + other.y;
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(const MyClass& other) {
//		printf("operator+\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(int n) {
//		printf("int operator+\n");
//		return MyClass(x + n, y + n);
//	}
//};
//
//int main()
//{
//	MyClass obj(10, 20);
//	MyClass obj2(20, 30);
//	MyClass obj3 = obj.add(obj2);
//	MyClass obj4 = obj.operator+(obj3);
//	MyClass obj5 = obj4 + 100 ;					// obj4.operator+(100);
//	//MyClass obj5 = 100 + obj4;				// 오류
//
//	obj.showMyClass();
//	obj2.showMyClass();
//	obj3.showMyClass();
//	obj4.showMyClass();
//	obj5.showMyClass();
//	
//
//	return 0;
//}
//// 오버로딩 할 수 없는 연산자 
//// ::, ., *, sizeof
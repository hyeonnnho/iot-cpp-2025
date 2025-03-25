///*
//*/
//#include <iostream>
//
//class MyClass {
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << this << ", " << num << " constructor" << std::endl;
//	}
//	MyClass(const MyClass& other) : num(other.num) {
//		std::cout << this << " copy constructor" << std::endl;
//	}
//	~MyClass() {
//		std::cout << this << ", " << num << " destructor" << std::endl;
//	}
//	void setData(int n) { num = n; }
//};
//MyClass func(MyClass aobj) {					// 매개변수로 받아서 임시객체 생성(복사생성자)
//	std::cout << "func()" << std::endl;
//	return aobj;								// 임시객체로 전달(복사생성자)
//}
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2{ func(obj) };
//	std::cout << "bye" << std::endl;
//
//	return 0;
//}
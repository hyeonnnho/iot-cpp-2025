﻿///*
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		std::cout << num << " constructor" << std::endl;
//	}
//	~MyClass() { std::cout << num << " destructor" << std::endl; }
//};
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2 = MyClass{ 20 };			// 이름 없는 임시 객체
//	MyClass{ 30 };							// 이름 없는 임시 객체 -> 다음 행으로 넘어가기 전에 소멸
//
//	std::cout << "bye" << std::endl;
//	return 0;
//}
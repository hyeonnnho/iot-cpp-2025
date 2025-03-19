﻿///*
//	생성자 constructor
//	생성자 호출로 객체가 만들어진다.
//	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
//	생성자는 초기화 기능에 사용한다.
//	생성자는 오버로딩이 가능하다.
//	프로그래머가 생성자를 작성하면 더이상 디폴트 생성자는 제공되지 않는다.
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass() {}		// 기본 생성자
//	MyClass(int n1, int n2) {		// 생성자(입력을 두개 받는)
//		m_num1 = n1;
//		m_num2 = n2;
//	}
//	~MyClass() {}		// 소멸자
//	void printData() {
//		cout << "나는 MyClass의 인스턴스 입니다." << endl;
//		cout << "m_num1: " << m_num1 << endl;
//		cout << "m_num2: " << m_num2 << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj();
//	MyClass obj2(100, 200);
//	obj2.printData();
//	return 0;
//}
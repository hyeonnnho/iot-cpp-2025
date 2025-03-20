///*
//	deep copy 복사 생성자
//	동적 할당 받은 경우
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* pname, int _age){
//		name = (char*)new char[strlen(pname) + 1];
//		strcpy(name, pname);
//		age = _age;
//	}
//	Person(const Person& other) {
//		age = other.age;
//		name = (char*)new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//	}
//	~Person() {
//		delete[] name;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Person p("이현호", 27);
//	p.printPerson();
//
//	Person p2(p);
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	디폴트로 자동으로 제공바는 생성자: 디폴트 생성자, 복사 생성자, 소멸자 
//*/
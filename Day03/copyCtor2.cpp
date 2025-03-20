///*
//	copyconstructor (복사생성자)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("construcor call!!\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {					// 복사생성자 : 객체가 입력으로 올때에는 상수 참조로 받아야함
//		printf("copy constructor!!\n");
//		this->age = other.age;				// this : 멤버변수
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//	
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
//	return 0;
//}
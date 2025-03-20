///*
//	copyconstructor (복사생성자)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];
//	int m_age;
//public:
//	Person(const char* pname, int age) {
//		printf("Constructor call!!\n");
//		strcpy(m_name, pname);
//		m_age = age;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
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
//	return 0;
//}
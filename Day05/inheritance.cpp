///*
//	inheritance(상속)
//	private, public, protected
//	is a(~은 ~이다), has a(~은 ~을 가지고있다) 관계가 성립해야 한다.
//*/
//#include <iostream>
//#include <string.h>
//
//class Human {								// 부모 클래스, 기초 클래스, 슈퍼 클래스, 베이스 클래스
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//class Student:public Human {				// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
//private:
//	int studentID;
//public:
//	Student(const char* name, int age, int studentID);
//	void showStudent();
//};
//Human::Human(const char* aname, int aage) {
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() {
//	std::cout << "이름: " << name << ", 나이: " << age << std::endl;
//}
//// 상속받은 멤버들은 상속한 부모 클래스의 생성자에서 초기화를 한다.
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {		// 콜론 초기화
//	//strcpy(name, aname);
//	//age = aage;
//	studentID = astudentID;
//}
//void Student::showStudent() {
//	//std::cout << "이름: " << name << std::endl;	// 자식 클래스에서 부모 클래스로 접근 x
//	std::cout << "학번: " << studentID << std::endl;
//}
//int main()
//{
//	Human h("홍길동", 25);
//	h.getData();
//
//	Student h2{ "임꺽정", 30 , 202502022 };
//	h2.getData();
//	h2.showStudent();
//
//	return 0;
//}
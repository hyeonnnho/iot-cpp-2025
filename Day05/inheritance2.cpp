///*
//    상속(Inheritance)2
//    - protected 접근 제어문: 상속받은 자식이 접근 가능하게 해줌
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//protected:
//    char name[20];
//    int age;
//public:
//    Human(const char* aname, int aage) {
//        strcpy(name, aname);
//        age = aage;
//    }
//    void getData() {
//        cout << "이름: " << name << "\t나이: " << age << endl;
//    }
//};
//
//class Student : public Human {
//private:
//    int stdID;
//public:
//    Student(const char* aname, int aage, int astdID) : Human(aname, aage) {
//        stdID = astdID;
//    }
//    void showStudent() {
//        std::cout << "이름: " << name << "\t나이: " << age << std::endl;      // 자식 클래스에서 부모클래스로 접근하면 오류 발생
//        std::cout << "학번: " << stdID << std::endl;
//    };
//};
//
//int main()
//{
//    Human h("홍길동", 25);
//    h.getData();
//
//    Student h2{ "임꺽정", 30, 202503 };
//    h2.showStudent();
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>  // strcpy 함수 사용
//
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char* name;  // 동적 할당된 문자열을 저장할 포인터
//    int age;
//
//public:
//    // 생성자에서 동적 메모리 할당
//    MyClass(int n1, const char* str, int n2);
//
//    // 소멸자에서 동적 메모리 해제
//    ~MyClass() {			// 원래는 자동호출
//        delete[] name;  // 동적으로 할당한 메모리 해제 시에만 작성
//    };
//
//    void getData() const;
//};
//
//MyClass::MyClass(int n1, const char* str, int n2) {
//    id = n1;
//    name = new char[strlen(str) + 1];  // 동적 메모리 할당
//    // name = str       // 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//    strcpy(name, str);  
//    age = n2;
//}
//void MyClass::getData() const{      // 상수 멤버 함수(모든 멤버 값들을 상수화 시킴)
//    cout << "id: " << id << endl;
//    cout << "이름: " << name << endl;
//    cout << "나이: " << age << endl;
//}
//int main()
//{
//    MyClass obj(1, "홍길동", 30);
//    obj.getData();
//
//    return 0;
//}

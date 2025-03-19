//#define _CRT_SECURE_NO_WARNINGS  // MSVC 환경에서 strcpy 경고 방지
//#include <iostream>
//#include <cstring>  // strcpy, strncpy 포함
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char name[20];
//    int age;
//public:
//    MyClass()  {}
//
//    void setData(int _id, const char* _name, int _age) {
//        id = _id;
//        strncpy_s(name, _name, sizeof(name) - 1);		// 문자열은 대입연산자 불가능 >> 문자열 복사 방식
//        age = _age;
//    }
//
//    void getData() {
//        cout << "id: " << id << endl;
//        cout << "이름: " << name << endl;
//        cout << "나이: " << age << endl;
//    }
//};
//
//int main()
//{
//    MyClass obj;
//    obj.setData(1, "김철수", 20);
//    obj.getData();
//
//    return 0;
//}

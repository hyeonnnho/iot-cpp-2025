//#include <iostream>
//#include <cstring>  // strcpy, strncpy 포함
//#define _CRT_SECURE_NO_WARNINGS  // MSVC 환경에서 strcpy 경고 방지
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char name[20];
//    int age;
//public:
//    // 기본 생성자 추가 (멤버 변수 초기화)
//    MyClass() : id(0), age(0) { name[0] = '\0'; }
//
//    void setData(int _id, const char* _name, int _age) {
//        id = _id;
//        strncpy(name, _name, sizeof(name) - 1);
//        name[sizeof(name) - 1] = '\0';
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

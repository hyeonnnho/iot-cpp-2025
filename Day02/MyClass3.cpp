#include <iostream>
#define _CRT_SECURE_NO_WARNINGS  // MSVC 환경에서 strcpy 경고 방지
using namespace std;

class MyClass {
private:
    int id;
    char* name;
    int age;
public:
    // 기본 생성자 추가 (멤버 변수 초기화)
    MyClass() : name(nullptr) {    }

    ~MyClass() {
        delete[] name;
    }
    void setData() {
        if (name != nullptr) {
            delete[] name;
        }
        name = new char[20];
        printf("id, 이름, 나이 값을 입력하세요. ");
        cin >> id >> name >> age;
        
    }

    void getData() {
        cout << "id: " << id << endl;
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        
    }
};

int main()
{
    MyClass obj;
    obj.setData();
    obj.getData();

    return 0;
}

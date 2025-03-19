/*
    step1. 이름과 전화번호는 동적 할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Human {
private:
    char* pname;
    int age;
    char* ptel;
public:
    Human(const char* name, int n, const char* tel){
        pname = (char*)new char[sizeof(name)];
        strcpy(pname, name);
        age = n;
        ptel = (char*)new char[sizeof(tel)];
        strcpy(ptel, tel);
    }
    ~Human(){
        delete[] pname;
        delete[] ptel;
    }
    void getData() {
        printf("pname: %s, age: %d, ptel: %s", pname, age, ptel);
    }
};

int main()
{
    Human h( "홍길동", 30, "010-1234-1234");
    h.getData();
    return 0;
}
///*
//    멤버 초기화
//    1. 상수 멤버 변수 초기화
//    2. 레퍼런스 초기화
//    3. 객체를 멤버로 가지는 경우
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class ConstClass {
//private:
//    int m_value;
//    const int m_value2;         // 상수 멤버 변수는 객체 생성될 때 반드시 초기화가 되야함 >> 콜론 초기화
//public:
//    ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }
//    void showValue() {
//        printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
//    }
//};
//
//class RefClass {
//private:
//    int& ref;               // 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
//public:
//    RefClass(int& r): ref(r) { }
//    void showValue() {
//        printf("ref: %d\n", ref);
//    }
//};
//
//class Position {
//private:
//    int m_x;
//    int m_y;
//public:
//    Position(int x, int y) {
//        printf("Position 생성자!!\n");
//        m_x = x, m_y = y; }
//    void getData() {
//        printf("m_x: %d, m_y: %d\n", m_x, m_y);
//    }
//};
//class ObjClass {
//private:
//    Position pos;                   // 객체 멤버 변수
//public:
//    ObjClass(int x, int y) : pos(x, y) {        // pos객체 먼저 생성
//        printf("ObjClass 생성자!!\n");         // 그 후 본체 실행
//    }
//    void showValue() {
//        pos.getData();
//    }
//};
//int main()
//{
//    ConstClass obj(10, 20);
//    obj.showValue();
//
//    int n = 50;
//    RefClass obj2(n);
//    obj2.showValue();
//    
//    cout << "-------------------------------------\n" << endl;
//    ObjClass o(3, 6);
//    o.showValue();
//
//    return 0;
//}
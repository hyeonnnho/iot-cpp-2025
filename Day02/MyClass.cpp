//#include <iostream>
//#include <cstring>  // strcpy, strncpy ����
//#define _CRT_SECURE_NO_WARNINGS  // MSVC ȯ�濡�� strcpy ��� ����
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char name[20];
//    int age;
//public:
//    // �⺻ ������ �߰� (��� ���� �ʱ�ȭ)
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
//        cout << "�̸�: " << name << endl;
//        cout << "����: " << age << endl;
//    }
//};
//
//int main()
//{
//    MyClass obj;
//    obj.setData(1, "��ö��", 20);
//    obj.getData();
//
//    return 0;
//}

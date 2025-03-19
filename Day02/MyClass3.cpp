#include <iostream>
#define _CRT_SECURE_NO_WARNINGS  // MSVC ȯ�濡�� strcpy ��� ����
using namespace std;

class MyClass {
private:
    int id;
    char* name;
    int age;
public:
    // �⺻ ������ �߰� (��� ���� �ʱ�ȭ)
    MyClass() : name(nullptr) {    }

    ~MyClass() {
        delete[] name;
    }
    void setData() {
        if (name != nullptr) {
            delete[] name;
        }
        name = new char[20];
        printf("id, �̸�, ���� ���� �Է��ϼ���. ");
        cin >> id >> name >> age;
        
    }

    void getData() {
        cout << "id: " << id << endl;
        cout << "�̸�: " << name << endl;
        cout << "����: " << age << endl;
        
    }
};

int main()
{
    MyClass obj;
    obj.setData();
    obj.getData();

    return 0;
}

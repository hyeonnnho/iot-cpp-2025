/*
    ���ڿ� ó���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    char str[20] = "ȫ�浿";
    char str2[20];
    //str2 = "������";         // �迭(�ּ�)�� l-value�� �ƴ�
    strcpy(str2, "������");

    cout << str << endl;
    cout << str2 << endl;
    
    //char* str3 = nullptr;         // NULL�����ʹ� �ƹ� �ּҵ� ����Ű�� ����
    char str3[100];                 // �̸� �޸𸮸� �Ҵ� ����
    cout << "�̸� �Է� >>";
    cin >> str3;                    // Ű����� �Է¹��� ���ڿ��� ���� str3�� ����Ű�� �޸� ������ �����ϴ� ����
    cout << str3 << endl;

    const char* name;
    name = "��ö��";               // ���ڿ� ���ͷ��� �б� ���� �޸�(������ ����)�� �ڵ����� ����
    cout << name << endl;

    return 0;
}

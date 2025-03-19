///*
//    문자열 처리하기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char str[20] = "홍길동";
//    char str2[20];
//    //str2 = "김유신";         // 배열(주소)은 l-value가 아님
//    strcpy(str2, "김유신");
//
//    cout << str << endl;
//    cout << str2 << endl;
//    
//    //char* str3 = nullptr;         // NULL포인터는 아무 주소도 가리키지 않음
//    char str3[100];                 // 미리 메모리를 할당 받음
//    cout << "이름 입력 >>";
//    cin >> str3;                    // 키보드로 입력받은 문자열을 변수 str3가 가리키는 메모리 공간에 저장하는 과정
//    cout << str3 << endl;
//
//    const char* name;
//    name = "김철수";               // 문자열 리터럴은 읽기 전용 메모리(데이터 영역)에 자동으로 저장
//    cout << name << endl;
//
//    return 0;
//}

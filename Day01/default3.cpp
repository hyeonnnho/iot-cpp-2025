﻿///*
//	함수 오버로딩 중 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때
//	입력없는 함수 호출 시 문제가 발생한다.
//*/
//#include <iostream>
//using namespace std;
//
//int func(int n = 0) {			// 디폴트 값 설정
//	return n * n;
//}
//int func() {
//	return 10;
//}
//int main()
//{
//	cout << func(10) << endl;
//	cout << func() << endl;
//
//	return 0;
//}
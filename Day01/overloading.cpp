///*
//	함수 오버로딩(다중정의) : 이름이 같지만 매개변수의 타입이나 갯수가 다르면 다른 함수이다.
//*/
//#include <iostream>
//using namespace std;
//
//int func() {
//	return 10;
//}
//int func(char c) {			// func와 다른 함수(매개변수와 타입이 다르기 때문)
//	return c;
//}
//int func(int n) {
//	return 10 + n;
//}
//int func(int n1, int n2) {
//	return n1 + n2;
//}
////char func(char c) {		// 다른 함수랑 겹침(반환 타입이 달라도 이름과 매개변수가 같음)
////	return 10;
////} 
//int main()
//{
//	cout << func() << endl;
//	cout << func('a') << endl;
//	cout << func(10) << endl;
//	cout << func(10, 20) << endl;
//
//	return 0;
//}
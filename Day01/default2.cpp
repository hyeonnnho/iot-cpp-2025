﻿///*
//	디폴트 매개변수를 여러개 적용할 때에는 맨 오른쪽부터 작성한다.
//*/
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int coordinates(int x, int y = 0, int z = 0);	// default값은 원형에만 작성한다
//int main()
//{
//	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
//	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
//	cout << "(10, def, def): " << coordinates(10) << endl;
//
//	return 0;
//}
//int coordinates(int x, int y, int z)
//{
//	int res;
//	res = pow(x, 2) + pow(y, 2) + pow(z, 2);	// 제곱
//	return sqrt(res);					// 제곱근
//}
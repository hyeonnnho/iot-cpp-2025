///*
//		new는 생성자 호출이 가능하므로 초기화가 가능하다.
//		생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드이다.
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* parr;
//	parr = new int[3] {10, 20, 30};		// 이름없는 배열 객체 생성하고 10, 20, 30 으로 초기화 한다
//	// parr = new int[3] = {10, 20, 30};	// 원래 우리가 아는 형태
//
//	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;
//	delete[] parr;
//	
//	return 0;
//}
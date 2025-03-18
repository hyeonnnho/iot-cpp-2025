///*
//	레퍼런스 - 선언과 동시에 반드시 초기화 해야함.
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10, num2 = 100;
//	int& ref = num;			// num의 메모리 공간에 ref라는 별칭이 생김
//	int* pn = &num;			// 포인터 선언
//	int& rref = ref;
//	rref = num2;
//	cout << rref << ", " << num2 << endl;
//	//int& rref;
//	//rref = ref;
//
//	// 똑같음
//	num++;			// 변수에 +1
//	ref++;			// 레퍼런스에 +1
//	(*pn)++;		// 간접참조 사용 +1
//
//	cout << "num++: " << num << endl;
//	cout << "ref++: " << ref << endl;
//	cout << "*(pn)++: " << *pn << endl;
//
//	cout << "&num: " << &num << endl;
//	cout << "&ref: " << &ref << endl;
//
//	return 0;
//}
///*
//	
//*/
//#include <iostream>
//using namespace std;
//int func(int& anum)				// &를 안쓰면 anum만 +1이고 num은 그대로임
//{
//	anum++;
//	return anum;
//}
//
//int main()
//{
//	int num = 10;
//	int res = func(num);
//	const int& res = func(num); // const를 사용하면 임시객체를 저장할 수 있는 공간이 생성되므로 가능
//	// int& res = func(num); // 오류: 임시객체 anum을 참조하는데 함수가 종료되고 나면 매개변수의 메모리도 없어짐.
//
//	cout << num << ", " << res << endl;
//
//	return 0;
//}
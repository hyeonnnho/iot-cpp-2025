///*
//	vector container 출력
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printf("%d\n", v[2]);
//
//	// 출력 1
//	for (auto i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;				// 같음. 조금 더 안전
//	}
//	cout << endl << endl;
//	// 출력 2
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//	cout << endl << endl;
//	// 출력 3
//	vector<int>::iterator iter;					// 반복자를 사용. iterator는 포인터처럼 동작
//	for (iter = v.begin(); iter != v.end(); iter++) {		// iter가 begin()부터 iter != end() 조건이 참인 동안 시행
//		cout << *iter << endl;
//	}
//	cout << endl << endl;
//	// 출력 4
//	for (auto i : v) {
//		cout << i << endl;
//	}
//
//	return 0;
//}
///*
//	vector
//*/
//#include <iostream>
//#include <vector>		// vector 헤더파일 포함
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);		// 배열 5개 {0,0,0,0,0}
//	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };
//
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v3[%d]: %d ", i, v2[i]);
//	}
//
//	cout << endl;
//	for (auto i : v3) {			// 범위기반 for문	i가 인덱스가 아니고 v3의 각 요소값들을 i에 저장
//		//cout << v3[i] << endl;	// 오류 - 인덱스 사용 불가
//		cout << i << endl;
//	}
//
//	// begin()과 end()는 iterator(반복자) 타입을 반환한다. (포인터)
//	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;
//	cout << "v3의 마지막 요소값: " << *(v3.end()-1) << endl;	// end는 마지막 요소 +1을 반환함
//
//	return 0;
//}
//
////vector.size(): 원소 크기(갯수)를 반환
////vector.begin(): 첫번째 주소를 반환
////vector.end(): 마지막의 다음 주소를 반환
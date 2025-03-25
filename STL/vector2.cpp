/*
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	cout << "[ v[i], v.size(), v.capcity() ]" << endl;
	//for (int i = 0; i <= 32; i++) {
	//	v.push_back(i + 1);
	//	cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
	//}

	vector<int> v2;
	v2.push_back(10);		// 요소값을 넣을 때 차례대로 들어감
	v2.push_back(11);
	v2.push_back(12);
	v2.push_back(13);
	v2.insert(v2.begin(), 1);
	v2.insert(find(v2.begin(), v2.end(), 13), 20);	// 13 값을 찾아서 20을 집어넣어라

	for (auto i : v2) {
		cout << i << endl;
	}

	v2.pop_back();				// 마지막 요소 제거
	for (auto i : v2) {
		cout << i << endl;
	}

	return 0;
}
//v.push_back(10) : 마지막 원소 뒤에 10을 추가한다.
//v.insert(index, value) : index번째 위치에 value를 넣는다.
//v.capacity() : 벡터에 할당된 메모리 크기를 리턴한다. - v.size()

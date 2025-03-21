/*

*/
#include <iostream>

template <typename T>
class CTest {
private:
	T num;
public:
	//CTest(T n) : num(n) {}
	CTest(T);
	T getData() {
		return num;
	}
};
template <typename T> 
CTest<T>::CTest(T n) {
	num = n;
}
int main()
{
	CTest<int> obj(10);				// 클래스 템플릿은 인스턴스 생성 시 반드시 typename을 지정
	return 0;
}
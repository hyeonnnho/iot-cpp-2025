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
	CTest<int> obj(10);				// Ŭ���� ���ø��� �ν��Ͻ� ���� �� �ݵ�� typename�� ����
	return 0;
}
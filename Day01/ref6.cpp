/*

*/
#include <iostream>
using namespace std;

int& func(int& ref)				// &를 안쓰면 anum만 +1이고 num은 그대로임
{
	ref++;
	return ref;
}

int main()
{
	int n = 10;
	int& ref = func(n);
	cout << ref << endl;

	return 0;
}
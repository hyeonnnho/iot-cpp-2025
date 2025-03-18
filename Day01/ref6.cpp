/*
	출력인 경우: 레퍼런스
*/
#include <iostream>
using namespace std;

int& func(int& ref)	
{
	ref++;
	return ref;		// l-value
	//return ref++;		// r-value
}

int main()
{
	int n = 10;
	int& ref = func(n);		
	int ref = func(n);		
	cout << ref << endl;	

	return 0;
}
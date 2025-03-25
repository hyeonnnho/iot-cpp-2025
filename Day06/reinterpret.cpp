///*
//	reinterpret_cast : 포인터->포인터, 포인터->변수, 변수->포인터
//	주로 포인터 관련 연산자.
//*/
//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			// int* -> long
//	unsigned int ui = reinterpret_cast<int>(ip);	// int* -> int
//	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);
//
//	//int* p = reinterpret_cast<int*>(lg);			// long -> int*
//	//int* p1 = reinterpret_cast<int*>(ui);			// x64 -> x86으로 변경 후 실행
//	//printf("p1: %d\n", *p1);
//
//	std::cout << "+++++++++++++++++++" << std::endl;
//	int* p = new int{ 100 };
//	printf("p: %d\n", *p);
//	char* pc = reinterpret_cast<char*>(p);
//	printf("c: %c\n", *pc);							// int* -> char*
//
//	p = reinterpret_cast<int*>(pc);					// char* -> int*
//	printf("p: %d\n", *p);
//
//	delete p;
//	delete ip;
//	return 0;
//}
//
////char ch = 10;
////int n = (int)ch;
///*
//	StaticTest 라는 클래스를 만드는데 
//	멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//	3개 입력을 받는 생성자를 작성한다. 회원 번호는 자동으로 증가시킬 것.
//	출력 담당의 showmember() 메서드를 구현하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest {
//private:
//	char* name;
//	char* phone;
//	char* addr;
//	static int cnt;
//public:
//	StaticTest(const char* pname, const char* pphone, const char* paddr);
//	~StaticTest();
//	static void increasecnt();
//	void showmember();
//};
//int StaticTest::cnt = 1;
//void StaticTest::increasecnt() {
//	cnt ++;
//}
//StaticTest::StaticTest(const char* pname, const char* pphone, const char* paddr) {
//	name = (char*)new char[strlen(pname) + 1];
//	strcpy(name, pname);
//	phone = (char*)new char[strlen(pphone) + 1];
//	strcpy(phone, pphone);
//	addr = (char*)new char[strlen(paddr) + 1];
//	strcpy(addr, paddr);
//}
//StaticTest::~StaticTest() {
//	delete[] name;
//	delete[] phone;
//	delete[] addr;
//}
//void StaticTest::showmember() {
//	std::cout << "회원번호: " << cnt << std::endl;
//	printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//	increasecnt();
//}
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-2222-2222", "서울");
//	m2.showmember();
//	StaticTest m3("김철수", "010-3333-3333", "경기");
//	m3.showmember();
//	return 0;
//}
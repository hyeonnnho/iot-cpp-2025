#pragma once

class A {
	int a;		// private 멤버 변수(클래스 내부에서만 접근 가능)
public:			// 외부에서 접근 가능하게 함
	A(int aa);	// 생성자(class 이름과 동일해야함) 매개변수로 받은 값을 멤버변수에 저장
	void AInfo();
};

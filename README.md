# iot-cpp-2025
 c++언어 학습 리포지토리

# 1일차
- 기본 틀 : [C++](./Day01/Hello.cpp)
    ```cpp
    #include <iostream>						// C++ 헤더파일

    int main()
    {
        std :: cout << "Hello World" << std::endl;	// C++ 스타일
        printf("abce");		// C 스타일. 틀린것아님
        return 0;
    }
    ```

- 변수 선언 : [C++](./Day01/cout2.cpp)
    ```cpp
    int num(100);       // int를 객체로 보고 이름이 num인 int객체를 만들고 100으로 초기화
    ```

- cout : [C++](./Day01/cout.cpp)
    - 표준 출력 객체
    ```cpp
    // using namespace std; 라고 미리 선언하면 뒤에서 std 생략가능!
    std::cout << "abe" << std::endl;     // std::endl 은 개행 처리
    // std: 표준 라이브러리를 의미하는 네임스페이스
    ```

- cin : [C++](./Day01/cin.cpp)
    - 표준 입력 객체
    ```cpp
    // using namespace std; 라고 미리 선언하면 뒤에서 std 생략가능!
    std::cin >> 변수;   // 변수로 입력받은 값을 집어넣음
    ```

- 함수의 다형성
    - 함수 오버로딩(함수의 다중정의) : [C++](./Day01/overloading.cpp)
    - 함수 오버라이딩(함수의 재정의) >> 상속

- 디폴트 매개변수 : [C++](./Day01/default.cpp)
    - 디폴트 매개변수를 여러개 적용할 때에는 맨 오른쪽부터 작성
    - 함수 오버로딩 중 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때
    입력없는 함수 호출 시 문제가 발생
    
- Namespace : [C++](./Day01/namesp.cpp)
    - 이름 충돌(name conflict)을 방지하기 위해 C++에서 제공하는 이름 공간(name space) 관리 기능

- 생성자
    - scope : [C++](./Day01/scope.cpp)
        - 헤더파일에서 class 생성 후 불러오기 [H](./Day01/scope.h)
        - A a(1) : class A의 생성자 호출 >> 멤버변수에 1 전달
    - new

- 메모리 동적 할당
    - malloc : [C++](./Day01/new.cpp)
        - `포인터는 배열과 같은 연속된 메모리를 가리키기 때문에, p[i]를 사용하면 *(p + i)와 동일하게 동작해서 배열처럼 사용`
    - new - delete : [C++](./Day01/new2.cpp)
        - 자료형 포인터 
        ```cpp
        자료형* 변수
        변수 = new 자료형[크기];
        delete 변수             //만약 배열이라면 delete[] 변수
        ```
        - new는 객체를 생성할 때 생성자를 자동 호출함 (객체를 생성하기 위해서는 생성자 호출이 있어야한다.)
        - new는 생성자 호출이 가능하므로 초기화가 가능
- 참조
    - 다른 함수에 선언된 지역변수의 값을 바꾸는 방법1 : [C++](./Day01/ref.cpp)
    - 다른 함수에 선언된 지역변수의 값을 바꾸는 방법2 : [C++](./Day01/ref2.cpp)
        - 레퍼런스(&) : [C++](./Day01/ref3.cpp)
            - 보이지않는 포인터, 메모리를 사용하지 않음
            - `변수의 별칭`을 만들어냄
            - 선언과 동시에 반드시 초기화

        - 상수 레퍼런스(const) : [C++](./Day01/ref4.cpp)
            - 상수 레퍼런스로 선언하면 리터럴도 참조 가능
            - 임시 객체를 저장할 수 있는 공간이 생성 : [C++](./Day01/ref5.cpp)

- 구조체 : [C++](./Day01/st_c2.cpp) -- [C](./Day01/st_c.cpp)
    - 멤버 함수 추가
- class : [C++](./Day01/st_c3.cpp)
    - public:
        - 외부에서 class에 접근 가능
    - 생성자
        - 생성자는 출력이 없음
        - 클래스명과 같아야함

# 2일차

- class 구성요소 : [C](./Day02/class2.cpp)
    - 접근제어 지시자(private, public, protected)
    - 멤버 변수 : 속성(private 영역)    - 각 객체마다 소유함
    - 멤버 함수(메서드) : 기능(public 영역)     - 코드 세그먼트에 저장되어 개체들이 공유함
    - 생성자 : [C](./Day02/class3.cpp)
        - 따로 만들지 않아도 디폴트 생성자가 있음
        - 생성자를 통해 객체 생성
        - 객체 생성 시 구조에 맞는 생성자 필요
        - 초기화 기능
        - 오버로딩(다중정의) 가능
    - MyClass 실습
        - setData, getData 만들기 [C++](./Day02/MyClass.cpp)
            - 문자열은 대입연산자 불가능 >> 문자열 복사 방식
            - 문자열은 주소이므로 매개변수로 받을 때 포인터 변수로 받음
        - setData 입력 받기 [C++](./Day02/MyClass2.cpp)
        - name 동적 메모리 할당 [C++](./Day02/MyClass3.cpp)
            - 문자열 리터럴은 읽기전용(수정 가능성이 있으면 오류)
            - const를 사용하여 문자열을 수정하지 않겠다는 의도를 명확히 해야함

- `문자열 처리` : [C++](./Day02/문자열처리하기.cpp)
    - 배열 = "문자열" : 오류(배열은 l-value가 아님)
        - strcpy(배열, "문자열")
    - NULL 포인터 변수 선언 후 cin으로 입력받으면 오류
        - NULL 포인터 변수가 아무것도 가리키지 않는데 그 곳으로 입력을 시킴
    - NULL 포인터 선언 후 문자열 리터럴은 받기 가능
        - 문자열 리터럴은 읽기 전용 메모리에 자동을 저장되고 포인터가 그 곳을 가리킴
        - But `const`를 사용해서 문자열 리터럴을 수정하지 않겠다는 의도를 명확히 해야함.
    - 배열[] 선언 하면 미리 메모리 할당 받음

- 초기화 : [C++](./Day02/init.cpp)
    - 콜론 초기화 : [C++](./Day02/init3.cpp)
    - 콜론 초기화 응용 : [C++](./Day02/init4.cpp)
        - 상수 멤버 변수 초기화
        - 레퍼런스 초기화
        - 객체를 멤버로 가지는 경우

- 동적할당 실습 : [C++](./Day02/Human.cpp)
    - 문자열 처리
    - 동적 할당

# 3일차
- 복사생성자 : [C++](./Day03/copyCtor2.cpp)
    - 객체가 입력으로 올때에는 상수 참조로 받아야함
    - deep copy : [C++](./Day03/copyCtor3.cpp)
        - 동적 할당 받은 경우
	- 디폴트로 자동으로 제공바는 생성자: 디폴트 생성자, 복사 생성자, 소멸자 ...

- 변환 생성자 : [C++](./Day03/변환생성자.cpp)
    - explicit : [C++](./Day03/변환생성자3.cpp)
- 이동 생성자 : [C++](./Day03/moveCtor2.cpp)
    - noexcept : 함수가 예외를 던지지 않음을 보장
    - 임시객체를 초기화해서 이후 사용을 방지

- BankingSystem : [C++](./BankingSystem/BankingSystemVer01.cpp)
    - 클래스 정의
    - 동적 메모리 할당
    - 포인터 배열
    - 반복문
    - 문자열 처리

- static 변수 : [C++](./Day03/static.cpp)
    - 클래스 멤버
    - 객체들이 공유
    - 초기화가 클래스 외부에서 이루어져야함
- static 함수 : [C++](./Day03/static2.cpp)
    - 일반 멤버 변수의 접근 허용x
    - static 멤버의 사용만 가능

- static 실습 : [C++](./Day03/static3.cpp)
    - 자동으로 회원번호 증가

- 연산자 오버로딩 : [C++](./Day03/operator.cpp)
    - 매개변수로 클래스를 받아서 클래스로 반환
    - 매개변수(const 클래스& 변수) 사용

# 4일차
- 연산자 오버로딩 : [C++](./Day04/operator3.cpp)
    - 오버로딩 할 수 없는 연산자 : `::, ., *, sizeof ...`
    - 객체 + 객체
    - 객체 + 정수
    - operator+(객체 or 정수)
 
- 전역함수 오버로딩 : [C++](./Day04/operator5.cpp)
    - 정수 + 객체
    - operator+(정수, 객체)
    - private : [C++](./Day04/operator6.cpp)
        - friend 선언
        - cout 객체를 통한 객체 출력

- #define : [C++](./Day04/inline.cpp)
    - #이 붙으면 컴파일러 말고 전처리기가 작동.
- inline : : [C++](./Day04/inline2.cpp)
    - 함수를 호출하는 대신 해당 함수의 코드가 호출된 위치에 직접 삽입
    - 컴파일러가 항상 inline을 적용하는 것은 아니며, 최적화를 고려해서 판단

- 템플릿 : [C++](./Day04/template.cpp)
    - 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용
    - 다형성과 재활용
    - 템플릿 일반화&특수화 : [C++](./Day04/template2.cpp)
    - typename 여러개인 경우 : [C++](./Day04/template3.cpp)
    - class 템플릿 : [C++](./Day04/template5.cpp)
        - 클래스 템플릿은 인스턴스 생성 시 반드시 typename을 지정
        - 템플릿 매개변수 : [C++](./Day04/template6.cpp)

# 5일차
- 상속 : [C++](./Day05/inheritance.cpp)
    - class SubClass : private or public or protected SuperClass
    - is a(~은 ~이다), has a(~은 ~을 가지고있다) 관계가 성립
    - protected 접근 제어문: 상속받은 자식이 접근 가능하게 해줌
    - 콜론 초기화
        - 상속받은 멤버들은 상속한 부모 클래스의 생성자에서 초기화
    - 객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다름
- 객체 포인터 : [C++](./Day05/objPointer3.cpp)
    - 객체를 가리키는 포인터
    - 포인터->메서드 or 변수
    - (*포인터).메서드 or 변수
    - 동적 할당 : [C++](./Day05/objPointer2.cpp)
    - Upcasting
        - 부모타입의 포인터로 자식타입의 객체를 가리킬 수 있음!
        - 자식타입의 객체가 부모타입으로 업캐스팅됨
        - 반대는 성립안함
    - Downcasting
        - 자식 포인터로 부모 객체를 가리킬 수 없다.
    - 부모와 자식 클래스에 오버라이딩 된 메서드를 호출 시키면 부모를 따라감

- `추상클래스` : [C++](./Day05/virtual.cpp)
    - 만들어진 배경
    1. 객체포인터로 객체에 접근
    2. upcasting으로 하면 포인터 타입의 중심으로 결정됨
    3. 객체타입 중심으로 변환 필요!  (자식타입의 메서드를 이용하고 싶음.)

    - 가상 함수
        - 자식 클래스의 멤버를 사용하기 위해 부모 클래스의 멤버 함수를 가상 함수로 만든다
        - 자식 클래스에서 재정의할 것을 약속받은 멤버 함수
        - virtual table이 만들어지고 dynamic binding으로 동작
    - 컴파일 시 포인터 형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정한다.
    - 순수 가상 함수를 가지는 클래스 : [C++](./Day05/virtual2.cpp)
        - 순수 지정자를 가지는 메서드
        - ```cpp virtual void 함수명() const = 0;  // 순수 가상 함수```
        - 이 함수를 상속받은 클래스에서 재정의 필요
    - 객체를 생성할 수 없다
    - 	추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
	따라서 `상위 클래스의 소멸자를 가상으로 만들어` 실타입의 소멸자 호출을 유도한다.

- static_cast : [C++](./Day05/static_cast.cpp)
    - static_cast<type-id>(expression)
    - 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환

# 6일차
- dynamic_cast : [C++](./Day06/dynamic_cast2.cpp)
    - 상속관계에서 안전하게 형변환을 지원
    - 다운캐스팅하는 경우 가상함수가 있어야 함
- const_cast : [C++](./Day06/const_cast2.cpp)
    - const 선언을 해체
- reinterpret_cast : [C++](./Day06/reinterpret.cpp)
    - 포인터->포인터, 포인터->변수, 변수->포인터
    - 주로 포인터 관련 연산자
- 임시 객체 : [C++](./Day06/tempobj.cpp)
    - 참조를 사용할 수 없음(우측값 참조 &&, 상수참조 const를 이용하면 가능!)
    - 다음 행으로 넘어가기 전에 소멸
    - 매개변수로 받을 때, return 할 때 복사생성자로 임시 객체 생성
- 스마트 포인터
    - 객체의 생명 주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 덜어줌
    - unique_ptr : [C++](./Day06/unique_ptr.cpp)
        - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr 대체)
    - shared_ptr : [C++](./Day06/shared_ptr.cpp)
        - 여러 개의 스마트 포인터가 동일한 객체를 공유
        - std::make_shared<T>()를 사용하면 객체와 참조 카운트가 하나의 메모리 블록에 할당
        - 서로 참조 시 메모리 누수 가능성
    - weak_ptr : [C++](./Day06/weak_ptr.cpp)
        - 객체를 소유하지 않고 참조만 함
        - 순환참조를 방지 : [C++](./Day06/weak_ptr2.cpp)
        - 객체의 생명 주기에 영향을 주지 않음
   
STL(Standard Template Library)
- container : 객체를 저장하고 관리하는 자료구조
    - 종류
        - 시퀀스 컨테이너 - 선형적으로 데이터 저장(순서)
            - vector, list, queue
        - 연관 컨테이너 - 일정한 규칙으로 저장
            - set, multiset, map, multimap
        - 컨테이너 어댑터 - 변형
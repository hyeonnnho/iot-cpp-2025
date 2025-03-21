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
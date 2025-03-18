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
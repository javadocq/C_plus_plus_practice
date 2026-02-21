### 전처리기

- 컴파일 이전에 처리됨
- "#" 으로 시작하고 라이브러리를 한번에 불러오는 역할

### #include ?

- 단순한 복사 붙여넣기!
- 프로젝트 속성 -> C/C++ -> 전처리기 -> 파일로 전처리기를 통해 확인

```
# include <iostream>

int main() {
    int a = 0;
    return 0;
}
```

### #define ?

- 단순한 복사 붙여넣기
- Platform independency, 코드 단축, debug 목적 등으로 활용

```
#include <iostream>

#define DEBUG

#ifdef DEBUG
#define LOG(x) std::cout << x << std::endl;
#else
#define LOG(x)
#endif

int main() {
    LOG("Hello");
}
```

### 주석

- 프로그래머가 읽을 수 있는 정보를 제공하기 위함(협업, 유지보수)
- 프로그램이 실행되기 전에 전처리기가 주석처리 된 부분은 날라간다.
- "//", "/\* \*/"

ex: int favorite_number; // 좋아하는 숫자

### main() function

- 모든 C++ 프로그램은 하나의 main함수를 가져야 함.
  - 프로그램의 진입점: 프로그램이 실행되면 가장 먼저 실행되는 함수
  - 리턴값 0이 올바른 프로그램 실행을 의미함(지금은 생략해도 무방)
- main 함수가 2개면은 오류가 발생

### C++ namespace

- std::cout
- 충돌 방지를 위함
  - 외부 라이브러리와 구현한 소스 코드간의 이름 충돌 가능성
- 코드의 '그룹화'로 이해
  - 서로 다른 namespace로 그룹화하여 충돌을 방지할 수 있음
- "::" : scope resolution operator

- using namespace
  - 특정 namespace 내의 함수들을 사용하겠다는 선언
  - 남용은 금물!
    - using namespace를 모든 코드에 넣는다면 namespace의 기능을 상실함

### Basic I/O

- cout과 <<
  - C++의 표준 출력 스트림, 삽입 연산자
- cin과 >>
  - C++의 표준 입력 스트림, 추출 연산자

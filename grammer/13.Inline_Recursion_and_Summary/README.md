### Inline function

- 함수의 호출에는 어느 정도 오버헤드가 존재
  -> Stack 생성, 파라미터 처리, pop stack, 리턴값 처리 등등....
- 함수를 Inline으로 정의하면 컴파일 단계에서 함수내의 명령문으로 함수 호출이 대체
  -> 일반적인 함수 호출보다 빠름
  -> 바이너리 파일의 용량이 커질 수 있다. (재사용이 아니라 각각 붙여넣는 것이다보니)
  -> 컴파일러에서 내부적으로 알아서 처리하기도 한다.

Inline int add_number 이런식으로 붙이게 되면
result = add_number(100, 200); 이 명령문이
result = 100 + 200; 으로 대체된다.

### Recursive Function

- 재귀 함수
  - 스스로를 호출하는 함수
  - Factorial
    -> 재귀 호출을 끝내는 base case가 반드시 실행되어야 한다. (Stack overflow 주의)

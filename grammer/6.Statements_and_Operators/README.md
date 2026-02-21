### 표현식

- 코드의 가장 작은 구성요소
- 연산을 통해 값을 계산

34
a+b
a-c
a=20

### 명령문

- 명령을 수행하는 코드 단위
- 세미콜론으로 끝나는 문장
- 표현식의 집합

int favorite_number;
favorite_number = 20;
3 + 5;

### 연산자

- 단항(++a), 이항(a+b), 삼항 연산자(a ? b : c)

- 대입 연산자
  lhs = rhs
  - l-value & r-value
  - 오른쪽의 값을 계산하여 왼쪽에 대입
  - 컴파일러가 대입이 가능한지 체크함
  - 왼쪽은 대입이 가능해야 함(ex, 리터럴, 상수는 될 수 없다)

- 산술 연산자
  - +, -, \*, /, %(mod)

- 증감 연산자
  - Prefix(++num, --num)
  - Postfix(num++, num--)

- 비교 연산자
  - ==, !=
  - 결과는 Boolean 타입의 true or false

- 관계 연산자
  - <, >, <=, >=

- 논리 연산자
  - !, &&, || (not, and, or)
  - Short-circuit evaluation
    -> 결과 파악이 가능한 경우 나머지 연산을 하지 않는다. (and의 경우 앞선 결과가 false이면 이후의 연산을 진행하지 않음) == 최적화

- 복합 연산자
  - a += 1;
  - a \*= b+c;

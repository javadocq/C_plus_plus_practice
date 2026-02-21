### IF문과 블록

- 조건문 내에서 하나 이상의 명령문을 실행하기 위해서는 블록 내에 명령문을 작성
- 블록은 "{" 로 시작해서 "}"로 끝난다
- 블록 내에서 선언된 변수는 "지역변수"라고 하며, 블록 내에서만 접근 가능하다

### if - else문

- 표현문의 참/거짓 여부에 따라 명령문 실행 분기
- else if 키워드를 통해 다양한 조건을 기술 가능

### nested if문

- 블록과 if-else문을 중첩하여 복잡한 조건을 효울적으로 기술 가능

```
if {
    if {

    } else {

    }
}
```

### switch문

- switch, case, default를 사용한 분기문
- switch 표현문의 결과는 정수형 리터럴이어야 함(정수, char, 열거형)

```
switch(selection) {
    case 1: cout << "1 selected";
            break;
    default: cout << "1,2,3,4 Not;
}
```

### 삼항 연산자

    (conditional_expr) ? expr1 : expr2

- 표현식이 참이라면 expr1의 값을 리턴
- 표현식이 거짓이라면 expr2의 값을 리턴

### for문

```
for(initialization; condition; increment) {
    statements;
}
```

- 콤마 연산자

```
for(int i = 0, j = 5; i<5; i++,j++) {
    statements;
}
```

- for문, 모든 조건이 항상 존재해야 할 필요는 없음

```
for (; true; ) == while(true)
```

### while문

```
while(expr) {
    statements;
    break; -> while문은 항상 끝날 수 있게 설계해야 한다. 안 그러면 무한루프
}
```

- continue
  - continue문 이후의 문장은 실행되지 않는다.
  - 다음 iteration으로 곧바로 넘어가기 위해 사용

- break
  - break문 이후의 문장은 실행되지 않음
  - 루프 밖으로 바로 빠져나가기 위해 사용

### 동적 메모리 할당

- 런타임에 힙 메모리를 할당
  -> 프로그램의 실행 도중 얼마나 많은 메모리가 필요한지 미리 알 수 없는 경우에 사용 - 사용자 입력에 따라 크기가 바뀌는 경우 - 파일을 선택하여 내용을 읽어오는 경우 등
  -> 큰 데이터를 저장해야 할 경우(stack은 크기가 작다, 몇 MB 정도)
  -> 객체의 생애주기(언제 메모리가 할당되고 해제되어야 할지)를 직접 제어해야 할 경우

- 힙 메모리는 스택과는 달리 스스로 해제되지 않는다.
- 사용이 끝나고 해제하지 않으면 메모리 누수가 발생한다.

- 할당 해제
  - delete pointer_name; 를 통해 메모리를 반납한다.
  - 사실 여기서 반납의 의미는 메모리를 삭제하는 것이 아니라 그냥 나는 권한을 내려놓을 게의 의미이다.
  - 그래서 반납 후에도 pointer의 주소는 바뀌지 않으며 이걸 계속 쓰다보면 나중에 OS에서 프로그램을 강제종료 시킬 수 있다.
  - 그래서 delete 후 nullptr로 초기화해주는 습관이 필요하다.

- 동적 할당을 이용한 배열
  - new[], delete[] 연산자 사용

  ```
  int* array_ptr = nullptr;
  int size = 0;

  cin >> size;
  array_ptr = new int[size];

  array_ptr[0] = 10;
  array_ptr[1] = 20;
  array_ptr[20] = 30;

  delete [] array_ptr;
  array_ptr = nullptr;
  ```

### Arrays and Pointer

- 배열의 이름은 배열의 첫 요소의 주소를 가리킨다.
- 포인터 변수의 값은 주소값이다.
- 포인터 변수와 배열이 같은 주소를 가리킨다면, 포인터 변수와 거의 동일하게 사용
  -> 차이점: 배열은 주소값을 정의 이후 변경 불가. Sizeof() 반환값이 다르다.

### Const and Pointers

- const의 포인터 (pointers to const)
  - 데이터가 const / 포인터는 다른 데이터를 가리킬 수 있음

  ```
  int high_score = 100;
  int low_score = 60;
  const int* score_ptr = &high_score; // 역참조의 값을 바꾸는 게 불가능해진다.

  *score_ptr = 80; // ERROR
  socre_ptr = *low_score; // OK
  ```

- const인 포인터 (const pointers)
  - 포인터가 const / 데이터는 변할 수 있음

  ```
  int high_score = 100;
  int low_score = 60;
  int* const score_ptr = &high_score; // 주소값을 바꾸는 게 불가능하다.

  *score_ptr = 80; // OK
  socre_ptr = *low_score; // ERROR
  ```

- const의 const인 포인터 (const pointers to const)
  - 포인터가 const / 데이터는 변할 수 있음

  ```
  int high_score = 100;
  int low_score = 60;
  const int* const score_ptr = &high_score; // 역 참조의 값을 바꾸는 거 & 주소값을 바꾸는 게 불가능하다.

  *score_ptr = 80; // ERROR
  socre_ptr = *low_score; // ERROR
  ```

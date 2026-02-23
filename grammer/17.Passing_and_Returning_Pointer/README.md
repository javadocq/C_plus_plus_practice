### Passing Pointers to a Function

- 포인터를 함수의 인자로 전달
  - Pass-by-address / 변수의 주소를 전달

### Returning a Pointer

- 포인터의 반환
  - 함수 내부에서 동적으로 할당된 메모리의 주소를 반환 가능

    -> 지연 변수에 대한 포인터는 반환이 안된다. 왜냐하면 스택 메모리에 쌓인 변수는 함수 실행이 종료되면 사라져버리기 때문이다.

    ```
    int* dont_do_this() {
        int num = 10; // num 변수는 스택 메모리에 쌓이기 때문에 사라져서 결국 이 num_ptr의 주소에 있는 값은 못 쓴다.
        int* num_ptr = &num;

        return num_ptr;
    }

    void main() {
        int* a = nullptr;
        a = dont_do_this();
        cout << *a << endl;
    }
    ```

### Pointer Cautions

- 초기화의 필요성
- 허상 포인터(dangling pointer)
  - 두 포인터가 동일 데이터를 가리키다, 하나의 포인터가 메모리를 해제할 경우
  - 지역 변수를 참조하고, 호출 스택이 끝나는 경우
- new의 실패
  - 가끔 발생할 수 있다. 이런 경우 예외 처리 필요
- 메모리 누수(memory leak)
  - 동적 할당으로 사용한 메모리는 반드시 해제해야 한다.

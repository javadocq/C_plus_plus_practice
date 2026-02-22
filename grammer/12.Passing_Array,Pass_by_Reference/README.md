### Passing Arrays to Function

- 배열을 함수로 전달
  - 형식적 매개변수 정의에 "[]"를 사용하여 배열을 전달 가능함
    `void print_array(int numbers[]);`
  - 주의! 배열의 요소들은 복사되지 않는다.
  - 배열의 이름은 배열의 첫 요소의 메모리를 가리킴
    -> 실제 매개변수에 복사되는 것은 이 메모리다.
  - 따라서, 배열에 얼마나 많은 요소가 저장되어 있는지 함수는 알지 못한다.

  - 배열의 값을 바꿀 수 있다.
  - 만약, 배열의 값이 안바뀌게 하고 싶으면 매개변수에 const를 붙인다.

### Pass-by-reference

- 참조자로 전달
  - 함수 내에서 값의 변환이 필요한 경우 사용
  - 값의 변환을 위해서는 매개변수의 주소값이 필요
  - 배열이 아닌 경우에도 C++에서는 참조자를 통해 가능
  - 형식 매개변수를 실제 매개변수의 별명처럼 사용하는 개념

- & 기호 사용

- Swap 예제

```
void swap(int &a, int &b);

int main() {
    int x=10, y=20;
    cout << x << " " << y << endl; // 10 20
    swap(x,y);
    cout << x << " " << y << endl; // 20 10
    return 0;
}

void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}
```

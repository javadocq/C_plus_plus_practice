#include <iostream>

using namespace std;

void print_array(const int [], int);
void zero_array(int [], int);
void scale_number(int& num);

int main() {
    int my_numbers[] = {1,2,3,4,5};
    zero_array(my_numbers, 5);
    print_array(my_numbers, 5);

    int number = 1000;
    scale_number(number);
    cout << number << endl;

    return 0;
}

void zero_array(int numbers[], int size) { // 이때, 배열은 타입이 int * 로 온다. 즉 배열은 포인터로 온다는 뜻이다.
    for (int i = 0; i < size; i++) {
        numbers[i] = 0; // 주소 자체를 불러오기 때문에 값이 바뀐다.
    }
}

void print_array(const int numbers[], int size) { // 이때, 배열은 타입이 int * 로 온다. 즉 배열은 포인터로 온다는 뜻이다.
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl; // 값은 주소를 갖고 있고 그 안에 값이 출력이된다.
    }
}

void scale_number(int& num) { // num 자체는 값을 가지고 있는 게 아니라 argument의 주소 값을 참조하고 있는 것이다.
    if (num > 100) {
        num = 100; // 배열과 비슷하게 수정 가능
    } else {
        num = num;
    }
}
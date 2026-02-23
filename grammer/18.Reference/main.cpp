#include <iostream>

using namespace std;

void Increment(int val) { // 단지 c의 복사본이기 때문에 원본에 영향 x
    val++;
}

void IncrementByReference(int& val) { // 참조자로 주소를 받겠다라는 뜻
    val++;
}

int main() {
    int a = 10;
    int& b = a;

    b = 20; // *를 안 붙이고 그냥 사용

    cout << a << endl; // 20
    cout << b << endl; // 20

    int c = 5;
    Increment(c);
    cout << c << endl; // 5

    IncrementByReference(c);
    cout<< c << endl; // 6
    
    int d= 5;
    int& e = d;
    int* f = &e;

    cout << (f == &d) << endl;
    // f == e는 불가능, e는 주소만 공유하는 거지 e 자체는 5라는 값이다.

    return 0;
}
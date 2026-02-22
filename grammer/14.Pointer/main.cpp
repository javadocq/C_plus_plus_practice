#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int* b = nullptr;

    b = &a; // a의 주소 값을 pointer에 넣어둔다.
    //b의 주소 값이 0x00000000000 -> 0x000000016fdfe758 변경
    *b = 20; // a의 주소 값의 값을 변경

    cout << a <<endl;

    int* p;

    cout << p << endl; // garbage address
    cout << &p << endl; // 0x61ff18 포인터의 주소값
    cout << sizeof(p) << endl; // x86에서 포인터의 크기는 8 바이트

    p = nullptr;

    cout << p << endl;

    char* ptr_c;   // sizeof(ptr_c) -> 8
    int* ptr_i;    // sizeof(ptr_i) -> 8
    double* ptr_d; // sizeof(ptr_d) -> 8
    
    cout << sizeof(ptr_c) << endl;
    cout << sizeof(ptr_i) << endl;
    cout << sizeof(ptr_d) << endl;
    return 0;
}
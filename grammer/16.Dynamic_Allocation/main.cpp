#include <iostream>

using namespace std;

int main() {
    int* int_ptr = nullptr; // 스택 메모리에 할당, 이 메모리는 자동으로 해제

    int_ptr = new int; // 힙 메모리에 int 하나를 담을 수 있는 메모리 주소를 찾고 반환 (malloc 개념), 이 힙에 생긴 애는 자동 해제 X
    
    cout << int_ptr <<endl; // 힙 메모리에 할당된 주소값
    cout << *int_ptr << endl; // 쓰레기 값

    *int_ptr = 100;
    cout << *int_ptr << endl;

    cout << int_ptr << endl;
    delete int_ptr; // Heap에 할당했던 메모리 반환
    cout << int_ptr << endl;
    *int_ptr = 200;
    cout << *int_ptr << endl;
    int_ptr = nullptr;

    return 0;
}
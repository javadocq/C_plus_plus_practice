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

    int scores[] = {100, 95, 90};

    //공통점
    cout << scores << endl; // 00F3FAF8
    cout << *scores << endl; // 100
    cout << scores[0] << endl; // 100

    int* score_ptr = scores;
    cout <<score_ptr << endl; //00F3FAF8
    cout << *score_ptr << endl; // 100
    cout << score_ptr[0] << endl; // 100

    //차이점
    cout << sizeof(scores) << endl; // 12
    cout << sizeof(score_ptr) << endl; // 8


    cout << score_ptr << endl; // 0x123400
    cout << (score_ptr + 1) << endl; // 0x123404 == score_pt + 1 * sizeof(int) => 이 sizeof(int, double)을 체크를 해줘야하기 때문에 포인터의 타입이 중요한 것이다.
    cout << (score_ptr + 2) << endl; // 0x123408

    cout << *score_ptr << endl; // 100
    cout << *(score_ptr + 1) << endl; // 95
    cout << *(score_ptr + 2) << endl; // 90

    return 0;
}
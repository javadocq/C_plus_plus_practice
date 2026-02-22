#include <iostream>

using namespace std;

int main() {
    int score = 10;
    double score_precise = 100.7;
    double socre_change = 10.7;

    int* score_ptr= nullptr;
    score_ptr = &score;
    // score_ptr = &score_precise; Compile Error

    cout << *score_ptr << endl;
    *score_ptr = 30; // 주소값에 30이라는 값 대입
    cout << *score_ptr << endl;

    double* score_ptr_double = nullptr;
    score_ptr_double = &score_precise;
    cout << *score_ptr_double << endl;
    score_ptr_double = &socre_change; // 중간에 주소값을 변경할 수 있다.
    cout << *score_ptr_double << endl;
    return 0;
}
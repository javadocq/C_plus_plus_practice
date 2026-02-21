#include <iostream>

using namespace std;

int main() {

    //size 표시
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;

    int age = 30;
    cout << sizeof(age) << endl;

    //상수 선언
    const int age = 50;
    //상수에는 값을 중간에 교체 불가능 (초기화시만 가능)
    //age = 30

    return 0;
}
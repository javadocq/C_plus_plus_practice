#include <iostream>

using namespace std;

int number = 100; // 여기에 선언하면 전역 변수여서 어디서든 사용 가능

int main() {
    {
        int num = 10;

        {
            cout << num << endl; // 블록 안쪽에서는 얼마든지 사용 가능
        }
    }
    
    cout << number << endl;
    // cout << num << endl; 블록 밖에서 num은 사용 불가능

    int a = 10;
    int b = 20;
    int result = 0;

    result = (b > a) ? b : a; // 삼항 연산자

    if (b > a) { // if-else 구문
        result = b;
    } else {
        result = a;
    }

    cout << result << endl;

    return 0;
}
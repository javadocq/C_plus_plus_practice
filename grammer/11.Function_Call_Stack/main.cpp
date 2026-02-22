#include <iostream>

using namespace std;

void static_local_increment() {
    static int num = 1; // static을 붙여주게 되면 지역변수가 아니라 전역변수처럼 사용된다.
    cout << "num : " << num << endl;
    num++;
    cout << "num : " << num << endl;
}

int func2(int x, int y, int z) {
    x += y + z;
    return x;
}

int func1(int a, int b) {
    int result;
    result = a + b;
    result = func2(result, a, b);
    return result;
}

int main() {
    static_local_increment();
    static_local_increment();
    static_local_increment();
    static_local_increment();

    int x = 10; // 스택 메모리에 각 지역 변수가 할당
    int y = 20;
    int z; // z는 초기화가 안되어있으니 쓰레기값이 들어가있다.
    z = func1(x, y); // 새로운 함수를 부르니 스택 메모리에 구분선이 생긴다.
    cout << z << endl;

    return 0;
}

// int z  20  0x1000-20
// int y  10  0x1000-16
// int x  60  0x1000-12
// -------------------- Func2 함수 시작 구분선
// int result  30  0x1000-20
// int b  20  0x1000-16
// int a  10  0x1000-12
// -------------------- Func1 함수 시작 구분선
// int z  CC  0x1000-8
// int y  20  0x1000-4
// int x  10  0x1000
// -------------------- Main 함수 시작 구분선

// 함수 실행이 끝나면 자동으로 메모리가 해제되고 함수 실행한 Line으로 되돌아간다.
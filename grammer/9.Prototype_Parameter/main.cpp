#include <iostream>

void sayHello(int val); // 컴파일러한테 미리 함수의 존재를 알려준다.
int add_number(int a, int b);

using namespace std;
 
void param_test(int formal) { // formal은 actual의 복사본
    cout << formal << endl;
    formal = 100; // 그래서 이렇게 해도 복사본의 값이 바뀌는 거지, 원본 값이 바뀌는 건 아니다.
    cout << formal << endl;
}

int main() {
    sayHello(300);
    cout << add_number(2,5) << endl;

    int actual = 50;
    cout << actual << endl;
    param_test(actual);
    cout << actual << endl;
}



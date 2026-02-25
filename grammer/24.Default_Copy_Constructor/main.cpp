#include <iostream>

using namespace std;

int main() {
    int* p1 = new int;
    int* p2 = p1;

    cout << p1 << endl;
    cout << p2 << endl; // 동일한 주소

    delete p1;
    delete p2; // 이미 해제한 주소를 또 해제하려고 하니 에러 발생
}
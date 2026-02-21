#include <iostream>

using namespace std;

int main() {
    // 배열의 각 요소가 4byte씩 차지하는 구조
    int scores[6] = { 100, 85, 21, 56, 70, 95 };

    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << scores[3] << endl;
    scores[3] = 100;
    cout << scores[3] << endl;


    const int year = 365; // const 없이 변수로 선언하면 배열의 사이즈로는 쓸 수 없다.
    int day[year];

    return 0;
}
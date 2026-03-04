#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Func {
    void operator()(int x){ // 이렇게 ()를 붙이면은 Functor이다.
        cout << x * x << endl;
    }
};

void f(int x) {
    cout << x * x << endl;
}

int main() {
    Func f1; 
    f1(3); // f(3) 이렇게 함수처럼 사용 가능한 객체를 Functor라고 한다.
          // f(3) --> f.operator()(3)

    vector<int> vec{1,2,3};
    
    auto it = find(vec.begin(), vec.end(), 2); // iterator를 반환
    // auto it = find(vec.begin(), vec.begin() + 4, 2) 이런 식으로 원하는 지점만 find 할 수도 있다.

    if(it != vec.end()) {
        // 만약 인덱스를 찾고 싶으면 distance를 사용 (algorithm 라이브러리)
        int index = distance(vec.begin(), it); // distance는 2개의 인자를 가지며 시작점, 찾은 값을 입력하면 해당 값에 인덱스를 구해준다.
        cout << "find it : " <<  index << endl;
    } else {
        cout << "not found" << endl;
    }

    auto it1 = find(vec.begin(), vec.end(), 8); // 해당하는 항목이 없으니 end()를 반환 -> 쓰레기 값

    if(it1 != vec.end()) {
        cout << "find it : " <<  *it1 << endl;
    } else {
        cout << "not found" << endl;
    }

    // Functor의 사용
    for_each(vec.begin(), vec.end(), f1);

    f(10);
    cout << f << endl; // 함수 자체를 호출하게 되면 함수의 메모리 주소가 나타나게 된다.
    
    // function pointer의 사용
    for_each(vec.begin(), vec.end(), f);

    // lambda expression의 사용
    for_each(vec.begin(), vec.end(), 
        [](int x) { // 익명 함수는 [] 처리, 대신 이 이후에는 접근 불가능
            cout << x * x << endl;
        }
    );

    return 0;
}
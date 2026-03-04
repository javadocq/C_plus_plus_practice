#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> vec{1,4,7};
    set<char> mySet{'A','B','C'};

    auto it = vec.begin();

    it += 2;
    cout << *it << endl;

    // iter를 사용하면 동일한 로직으로 set, vector 접근 가능
    for (auto it = mySet.begin(); it != mySet.end(); it++) {
        cout << *it << endl;
    }
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }

    // 역 반복자(역순으로 동작)
    for (auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *it << endl;
    }
    for (auto it = mySet.rbegin(); it != mySet.rend(); it++) {
        cout << *it << endl;
    }

    // vec의 값 변경
    for (auto it = vec.begin(); it != vec.end(); it++) { // cbegin, cend 이런식으로 붙이게되면 역참조로 값을 바꾸지 못한다.(c = const)
        *it = 1;
        cout << *it << endl;
    }

}
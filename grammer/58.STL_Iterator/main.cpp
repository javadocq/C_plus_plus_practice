#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> vec{1,2,3}; // 이렇게 되면 메모리에는 [1,2,3,] 마지막은 항상 비어있는 게 되고 이게 vec.end가 된다.
    set<int> mySet{1,2,3};

    // vector<int>::iterator it1; // iterator를 선언할 떄는 내가 반복하고 싶은 요소의 타입을 앞에 붙여주고 :: 한다.
    set<int>::iterator it2 = mySet.begin(); // 반복자의 초기화
    auto it3 = vec.begin(); // auto 키워드를 이용하여 타입 자동 추론

    for (vector<int>::iterator it1 = vec.begin(); it1 != vec.end(); it1++) { 
        cout << *it1 << endl;
    }
    return 0;
}
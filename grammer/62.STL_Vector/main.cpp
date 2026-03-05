#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
private:
    string name;
public:
    Person(string name) : name{name} {
        cout << "Called Constructor" << endl;
    };
};

int main() {
    vector<int> vec { 1,2,3,4,5 };
    vector<int> vec2;
    for (int i = 1; i <= 5; i++) {
        vec2.push_back(i);
    }

    cout << vec.size() << endl;
    cout << vec.capacity() << endl; // capacity는 size와 다르게 미리 메모리에 할당을 해놓은 상태이다.
    // capacity > size 이면, push_back 할 때, O(1)
    // capacity == size 이면, 새로운 메모리 할당을 위해 기존 벡터를 복사하고 추가한다. O(n) 
    // 만약 vector를 선언할 때, 초기화했다면 컴파일러가 아 고정값이구나 하고 size랑 동일해지는 경우가 있다.
    cout << vec2.capacity() << endl; // vec랑 똑같이 5개가 들어가있지만 얘는 capacity가 8이다.
    cout << vec.front() << endl; // 첫 번째 요소 반환
    cout << vec.back() << endl; // 마지막 요소 반환
    cout << vec.empty() << endl; // 벡터가 비어있는지 반환 1 / 0

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    // 파이썬이랑 다르게 -1은 끝 문자를 가리키는 게 아니라 그냥 엉뚱한 곳 찌르는 게 되버린다.
    //cout << vec[-1] << endl; // Runtime Error 얘는 이상한 곳을 찔러서 운 좋게 쓰레기 값을 내놓거나 혹은 프로그램 종료를 시켜버려서 예외처리 불가능
    //cout << vec.at(-1) << endl; // Exception 그나마 예외 처리를 가능하게 해준다.
    cout << vec.at(3) << endl; // index랑 동일하게 사용, 체킹까지 해준다.

    cout << "-----" << endl;

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec.data() << endl; // 데이터가 들어있는 첫 번째 요소의 메모리 주소를 반환
    vec.push_back(10);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl; // 이사를 가면서 메모리 공간을 더 확보하게 되면서 capacity 값이 늘어나게 된 거다.
    cout << vec.data() << endl; // 처음 capacity가 동일했기 때문에 이사를 가게 되어서 주소가 바뀐것이다.

    Person p1{"Kim"};
    vector<Person> vec3;

    vec3.push_back(p1);
    vec3.push_back(Person{"lee"});
    vec3.emplace_back("Jung"); // 메모리 낭비가 적으니 더 효율적, but 객체가 너무 많으면 무슨 객체를 만드는지 모르니 가독성 X

    vec.pop_back(); // 마지막 요소가 vec 요소에서 삭제된다. 반환 X

    auto it = find(vec.begin(), vec.end(), 3);
    vec.insert(it, 7); // iterator 요소, 요소 앞에다 넣을 값
    
    cout << vec[2] << endl; // 원래는 3이 있어야 하는데 7을 앞에 추가했으니 1,2,7,3,4,5 이다.

    vector<int> vec4 = {5,23,1,32,2};
    sort(vec4.begin(), vec4.end()); // sort 함수 (오름차순)
    sort(vec4.rbegin(), vec4.rend()); // sort 함수 (내림차순)
    for (auto it = vec4.begin(); it != vec4.end(); it++) {
        cout << *it << endl;
    }
    vec.swap(vec4); // vector의 swap 함수 vec랑 vec4를 서로 스왑한다.
    for (auto it = vec4.begin(); it != vec4.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
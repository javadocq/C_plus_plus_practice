#include <iostream>

namespace A {
    void function() {
        std::cout << "function of A" << std::endl;
    }
}

namespace B {
    void function() {
        std::cout << "fucntion of B" << std::endl;
    }
}

using namespace std;

int main() {
    A::function();
    B::function();

    int age = 37;
    float height = 180.7f; // 그냥 180.7로 쓰게 되면 double 타입으로 되는데 우리가 캐스트를 float로 했기 떄문에 f라고 붙여주는 것이다.

    cout << "my age is " << age << " Hello." << endl;
    cout << "my height is " << height << endl;
    return 0;
}

// 출력 예시
// function of A
// fucntion of B
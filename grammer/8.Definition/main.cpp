#include <iostream>

using namespace std;

void print_world() { // return 값이 없다면 void를 써도 무방
    cout << "World!" << endl;
}

void print_hello() {
    cout << "Hello ";
}

int main() {
    print_hello();
    print_world();
}


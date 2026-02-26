#include <iostream>
using namespace std;

class Base {
private:
	int value;
public:
	Base() : value{ 0 } {
		cout << "Base Constructor" << endl; // 먼저 기본 클래스 생성자 호출
	}
	Base(int val) : value{ val } {
		cout << "Base Constructor with value: " << value << endl;
	}
	~Base() {
		cout << "Base Destructor" << endl;
	}
};

class Derived : public Base {
private:
	int double_value;
public:
	Derived() : double_value{ 0 } { // Default constructor도 변수는 초기화 해주면 좋다
		cout << "Derived Constructor" << endl;
	}
	Derived(int val) : Base{val}, double_value { val * 2 } { // 만약, val 값이 들어올 때, Base 클래스의 생성자도 호출이 되는데 아무것도 명시를 하지 않으면 기본 생성자가 호출된다. 그래서 명시적으로 Base 클래스의 생성자를 호출해주는 것이 좋다.
		cout << "Derived Constructor with value: " << double_value << endl;
	}
	~Derived() {
		cout << "Derived Destructor" << endl; // 먼저 유도 클래스 소멸자 호출
	}
};


int main() {
	Base b;
	Base b2{ 100 };

	Derived d;
	Derived d2{ 100 }; // 이 val로 호출했을 때, Base 클래스의 생성자도 호출이 되는데 아무것도 명시를 하지 않으면 기본 생성자가 호출된다.
	return 0;
}
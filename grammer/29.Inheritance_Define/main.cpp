#include <iostream>

using namespace std;

class Number {
private:
	int value;
public:
	Number(int value) : value(value) {}

	// 연산자 오버로딩
	Number Add(Number other) {
		return Number{ value + other.value };
	}
	int GetValue() const {
		return value;
	}
	void display() {
		cout << "Value: " << value << endl;
	}
};

Number Add(Number n1, Number n2) {
	return Number{ n1.GetValue() + n2.GetValue()};

}

class Player {

};

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	// 연산자 오버로딩
	Point operator+(const Point& other) {
		return Point{ x + other.x, y + other.y };
	}
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

int main() {
	Player player1;
	Player player2;

	// Player p3 = p1 + p2; 불가능 
	// int 타입 이런 거는 사전에 컴파일러가 알 수 있지만, 사용자 정의는 몇 바이트를 할당해야하는지 모르기 때문에 불가능하다.

	int a = 1;
	int b = 2;
	int c = a + b; // 가능

	Number n1{ 10 };
	Number n2{ 20 };

	Number n3 = n1.Add(n2); // 첫번째 방법
	n3.display();
	Number n4 = Add(n1, n2); // 두번째 방법
	n4.display();

	Point p1{ 1, 2 };
	Point p2{ 3, 4 };
	Point p3 = p1 + p2; // 연산자 오버로딩을 통해 가능

	return 0;
}
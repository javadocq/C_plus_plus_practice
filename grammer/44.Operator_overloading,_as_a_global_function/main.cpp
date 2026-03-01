#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	friend Point operator+(const Point& p1, const Point& p2); // 전역 연산자 오버로딩을 선언한다. friend 키워드를 사용하여 private 멤버에 접근할 수 있도록 한다.
	// 이 안에서 구현을 해줘도 된다. 대신 friend가 붙으면 이 멤버 함수가 아니라 전역 함수로 구현이 된다.
	friend Point operator*(const Point& p, int scalar) { // 멤버 함수가 아니라 전역 함수
		return Point(scalar * p.x, scalar * p.y);
	};
	friend Point operator*(int scalar, const Point& p) { // 멤버 함수가 아니라 전역 함수
		return Point(scalar * p.x, scalar * p.y);
	};
	Point operator-() const {
		return Point{ -x, -y };
	}
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

Point operator+(const Point& p1, const Point& p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);
	// 이 전역 연산자 오버로딩은 Point의 멤버 함수가 아니기 때문에 private 멤버에 접근할 수는 없다.
}

int main() {

	Point p1{ 3, 4 };
	Point p2{ 3, 4 };
	Point p3 = p1 + p2; // 이전 예제에서 p1.operator+(p2)로 구현한 연산자 오버로딩이 없다면, 컴파일러는 operator+(p1,p2); 로 구현한 연산자 오버로딩을 찾는다.
	p3.display();

	p3 = 3 * p1; // 3.operator*(p1)은 문법적으로 말이 안된다. 전역 연산자 오버로딩이 필요하다. operator*(int, const Point&) 형태로 구현해야 한다.
	p3.display();

	p3 = p1 * 2; // 이거에 대한 전역 함수도 구현해두면 좋다.
	p3.display();

	return 0;
}
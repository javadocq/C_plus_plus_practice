#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	friend Point operator+(const Point& p1, const Point& p2);
	friend Point operator*(const Point& p, int scalar) {
		return Point(scalar * p.x, scalar * p.y);
	};
	friend Point operator*(int scalar, const Point& p) {
		return Point(scalar * p.x, scalar * p.y);
	};
	friend void operator<<(ostream& os, const Point& p);
	Point operator-() const {
		return Point{ -x, -y };
	}
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

Point operator+(const Point& p1, const Point& p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);

}

class MyOstream {
public:
	void operator<<(int val) {
		printf("%d \n", val);
	}
};

void operator<<(ostream& os, const Point& p) { // os는 참조자로 받아야 한다. (외워라)
	os << "Point(" << p.x << ", " << p.y << ")"; // 여기서 구현하는 거다.
}

int main() {
	MyOstream myOut;

	myOut.operator<<(10);

	myOut << 20; // 컴파일러는 myOut.operator<<(20); 이렇게 인식하게 된다.

	Point p1{ 1,2 };

	// 우리가 원하는 건 cout << p1; 이런 형태로 출력하는 것이다.
	cout << p1; // cout.operator<<(p1); <-- cout을 직접 건들이는 거는 불가능?? 일테니 아래꺼를 만드는 게 낫다.
	// operator<<(cout, p1); 이 둘중으로 찾아보게 될 것이다. 

	return 0;
}
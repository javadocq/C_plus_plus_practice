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
	friend ostream& operator<<(ostream& os, const Point& p);
	Point operator-() const {
		return Point{ -x, -y };
	}
	friend istream& operator>>(istream& is, Point& p) {
		cout << "Enter x and y: ";
		is >> p.x >> p.y;
		return is;
	}
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

Point operator+(const Point& p1, const Point& p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);

}

ostream& operator<<(ostream& os, const Point& p) { // cout 이라는 게 복사가 불가능하기 때문에 참조자로 받아야 한다. 그리고 체이닝이 가능하려면 반환 타입이 ostream& 이어야 한다.
	os << "Point(" << p.x << ", " << p.y << ")" << endl;
	return os;
}

int main() {


	Point p1;
	Point p2{ 3,4 };

	cin >> p1;
	cout << p1 << p2 << endl; // 이건 불가능하다. 왜냐면 cout << p1이 먼저 실행되는데 이건 반환 타입이 void이기 때문이다. 그래서 operator<<(cout, p1)에서 반환 타입을 ostream&으로 바꿔주면 된다. (체이닝이 가능해진다.)

	return 0;
}
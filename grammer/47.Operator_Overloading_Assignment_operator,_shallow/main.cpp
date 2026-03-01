#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point& operator=(const Point& p2) {
		if (this == &p2) { // 자기 자신과의 대입을 방지하기 위해 주소를 비교
			return *this; // this 객체를 역참조 해서 자기 자신을 반환
		}
		this->x = p2.x; // x 좌표를 복사
		this->y = p2.y; // y 좌표를 복사
		return *this;
	}

	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

int main() {


	Point p1;
	Point p2{ 3,4 };

	p1 = p2;
	p1.display(); // Point(3, 4) 출력

	return 0;
}
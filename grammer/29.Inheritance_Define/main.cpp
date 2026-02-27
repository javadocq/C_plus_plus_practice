#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point operator-() const {
		return Point{ -x, -y };
	}
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

int main() {
	
	Point p1{ 3, 4 };
	Point p2{ 3, 4 };

	Point p3 = -p1;
	p3.display();
	
	return 0;
}
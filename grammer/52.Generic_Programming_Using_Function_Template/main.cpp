#include <iostream>

using namespace std;

template <typename T> // T라는 이름을 가진 '가상의 타입(플레이스홀더)'을 사용해서, 어떤 타입이 들어올지 나중에 결정하겠다고 선언하는 것

T MAX(T a, T b) {
	return (a > b) ? a : b;
}

class Point {
public:
	bool operator>(const Point& other) const { // 이렇게 구현을 해줘야한다.
		return false; // 임시로 false를 반환하도록 구현
	}
};

int main() {
	int a = 10;
	int b = 20;

	cout << MAX<int>(a, b) << endl; // 템플릿 함수에서 T가 int로 대체되어 MAX<int>(a, b)로 호출된다.

	double c = 3.14;
	double d = 5.67;
	cout << MAX<double>(c, d) << endl; // 템플릿 함수에서 T가 double로 대체되어 MAX<double>(c, d)로 호출된다.

	Point p1, p2;
	MAX<Point>(p1, p2);// 템플릿 함수에서 T가 Point로 대체되어 MAX<Point>(p1, p2)로 호출된다. 하지만 Point 클래스에는 > 연산자가 정의되어 있지 않기 때문에 컴파일 오류가 발생한다.
}
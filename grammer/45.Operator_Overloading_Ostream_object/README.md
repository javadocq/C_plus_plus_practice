### cout에 대한 간단한 이해

- `cout`는 C++에서 표준 출력 스트림 객체이다.
- <<은 cout 객체(ostream 클래스)의 오버로딩된 연산자이다.

### 스트림 삽입 연산자 오버로딩, 구현

- ostream의 참조자를 반환하여 chain insertion이 가능하도록 구현해야 한다.
	-> 참조자를 반환하지 않으면 cout << p1 << p2와 같은 연산 불가능
	-> 또한 기본적으로 cout 객체는 복사가 불가능하기 때문에 참조자를 반환해야 한다.
	- 예시 코드
	```cpp
	#include <iostream>

	class Point {
	public:
		int x, y;
		Point(int x, int y) : x(x), y(y) {}
	};

	std::ostream& operator<<(std::ostream& os, const Point& p) {
		os << "(" << p.x << ", " << p.y << ")";
		return os; // 참조자 반환
	}

	int main() {
		Point p1(1, 2);
		Point p2(3, 4);
		std::cout << p1 << " " << p2 << std::endl; // (1, 2) (3, 4)
		return 0;
	}
	```
	- 위 코드에서 operator<< 함수는 ostream 객체에 Point 객체의 내용을 출력하는 역할을 한다.
### 이항 연산자의 전역 함수로의 선언

- Operator 오버로딩을 전역 함수로 선언(Point::operator가 아니다)
- Lhs도 매개변수로 전달
	-> 이러한 구현을 위해 함수를 friend로 선언하는 것이 일반적이다. (Point 클래스의 private 멤버에 접근하기 위해)

```cpp
Point  operator+(const Point& lhs, const Point& rhs) {
	return Point(lhs.x + rhs.x, lhs.y + rhs.y);
}
Point operator-(const Point& lhs, const Point& rhs) {
	return Point(lhs.x - rhs.x, lhs.y - rhs.y);
}
bool operator==(const Point& lhs, const Point& rhs) {
	return (lhs.x == rhs.x) && (lhs.y == rhs.y);
}
bool operator<(const Point& lhs, const Point& rhs) {
	return (lhs.x < rhs.x) || (lhs.x == rhs.x && lhs.y < rhs.y);
}
```

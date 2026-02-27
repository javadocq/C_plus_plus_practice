### Operator Overloading as Member Function

- 이항 연산자의 멤버 함수로서 선언(+,-,==,!=,>,<,>=,<=)
	- 선언 형태
	```
	Point operator+(const Point& other) const;
	Point operator-(const Point& other) const;
	bool operator==(const Point& other) const;
	bool operator <(const Point& other) const;
	```
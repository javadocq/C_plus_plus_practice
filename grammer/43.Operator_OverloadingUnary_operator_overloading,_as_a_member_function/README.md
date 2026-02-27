### Operator Overloading as Member Function

- 단항 연산자의 멤버 함수로서 선언(++, --, -, !)
	- 선언 형태
	
	```
	Point operator-() const; 
	Point operator++(); // 전위 증가 연산자
	Point operator++(int); // 후위 증가 연산자
	bool operator!() const; // 논리 부정 연산자
	```


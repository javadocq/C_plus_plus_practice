### Base Class Pointer 

- 기본 클래스의 포인터 사용 예
	- 아래와 같이 배열을 구성하여 활용 가능하다.
	```cpp
	Entity *p1 = new Entity{0,0};
	Entity *p2 = new Player{0,0};
	Entity *p3 = new Enemy{0,0};

	Entity *entities[] = {p1, p2, p3};
	
	for (int i = 0; i < 3; i++)
		entities[i]->Move(1, 1);
	```
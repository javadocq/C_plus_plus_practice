#include <iostream>

using namespace std;

class Entity {
protected:
	int x, y;
public:
	Entity(int x, int y) : x(x), y(y) {}
	virtual ~Entity() {
		cout << "Entity destructor called" << endl;
	}
	virtual void Move(int dx, int dy) { // 이렇게 되면 가상함수가 된거다.
		x += dx;
		y += dy;
	}
	void PrintPosition() {
		cout << "Entity position: " << x << ", " << y << endl;
	}
};

class Player : public Entity {
private:
	int hp;
	int xp;
public:
	Player(int x, int y, int hp, int xp) : Entity(x, y), hp{ hp }, xp{ xp } {}
	virtual ~Player() {
		cout << "Player destructor called" << endl;
	}
	virtual void Move(int dx, int dy) { // virtual을 여기에는 안 붙여도 되긴 하는데 표현상 붙이는 게 좋다.
		x += dx * 2;
		y += dy * 2;
	}
};

int main() {
	Entity q{ 1,1 };
	q.PrintPosition();

	q.Move(2, 1);
	q.PrintPosition();

	Entity* e = new Player{ 1,1,100,0 }; // Entity* e = new Player{ 1,1,100,0 }; 이렇게 해야 한다. Entity e는 객체이기 때문에 Player 객체로 대입할 수 없다.
	e->Move(2, 1); // Player의 Move가 호출된다. Entity의 Move가 호출되는 게 아니다.
	e->PrintPosition();

	delete e;
	return 0;
}
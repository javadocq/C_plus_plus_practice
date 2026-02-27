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

	Entity* e = new Player{ 1,1,100,0 };
	e->Move(2, 1);
	e->PrintPosition();

	delete e;

	Player p{ 1,1,100,0 };

	Entity& ref = p;
	ref.Move(2, 1); // 참조자를 이용해서도 동적 바인딩 사용 가능
	ref.PrintPosition();
	return 0;
}
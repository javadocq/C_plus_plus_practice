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
	virtual void Move(int dx, int dy) = 0;// 순수 가상 함수. Entity 클래스는 추상 클래스가 된다. Entity 클래스의 객체는 생성할 수 없고, Entity 클래스를 상속받은 클래스에서 Move 함수를 구현해야한다.
	virtual void PrintPosition() const {
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
	virtual void Move(int dx, int dy) {
		x += dx * 2;
		y += dy * 2;
	}
	virtual void PrintPosition() const override {
		cout << "Player position: " << x << ", " << y << endl;
	}
};

int main() {
	// Entity e{ 0, 0 }; // Entity 클래스는 추상 클래스이므로 객체를 생성할 수 없다. 컴파일 에러가 발생한다.
	Entity* ptr = new Player(0, 0, 100, 0); // 하지만 여전히 포인터/참조자를 사용해 오버라이딩된 함수를 동적 바인딩은 할 수 있다.
	Player p{ 0, 0, 100, 0 }; // Player class에서 만약 Move 함수를 구현하지 않았다면, Player 클래스도 추상 클래스가 되어 객체를 생성할 수 없다. 컴파일 에러가 발생한다.
	return 0;
}
#include <iostream>

using namespace std;

class IEntity { // 순수 가상 함숨만을 가졌기 때문에 인터페이스 클래스이다. 통상  IEntity와 같이 I로 시작하는 이름을 가진다.
protected:
	int x, y;
public:
	IEntity(int x, int y) : x(x), y(y) {}
	virtual ~IEntity() {
		cout << "Entity destructor called" << endl;
	}
	virtual void Move(int dx, int dy) = 0;
	virtual void PrintPosition() const = 0;
};

class Player : public IEntity {
private:
	int hp;
	int xp;
public:
	Player(int x, int y, int hp, int xp) : IEntity(x, y), hp{ hp }, xp{ xp } {}
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
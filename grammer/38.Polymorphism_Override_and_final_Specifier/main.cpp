#include <iostream>

using namespace std;

class Entity { // class Entity final { ... } 이렇게 하면 Entity를 상속받는 클래스는 만들 수 없다. Entity가 최종 클래스가 되는 것이다.
protected:
	int x, y;
public:
	Entity(int x, int y) : x(x), y(y) {}
	virtual ~Entity() {
		cout << "Entity destructor called" << endl;
	}
	virtual void Move(int dx, int dy) { // 이렇게 되면 가상함수가 된거다. (만약, final이 붙은 클래스라면 virtual이 붙어도 가상함수가 되지 않는다.)
		x += dx;
		y += dy;
	}
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
	virtual void Move(int dx, int dy) { // virtual을 여기에는 안 붙여도 되긴 하는데 표현상 붙이는 게 좋다.
		x += dx * 2;
		y += dy * 2;
	}
	virtual void PrintPosition() const override { // const를 안붙이는 실수를 방지하기 위해 override를 붙이는 게 좋다. override는 완전 기본 클래스와 똑같아야하다보니 다르면 컴파일 에러가 표시된다.
		// 또, override를 붙이면 이게 가상 함수를 오버라이드하는 함수라는 것을 명시적으로 표시해주기 때문에 가독성도 좋아진다.
		cout << "Player position: " << x << ", " << y << endl;
	}
};

int main() {
	Player p{ 1,1,100,0 };

	const Entity& ref = p; // const를 붙이면 ref를 통해 Player의 PrintPosition()이 값을 변경하지 않는 const를 붙여줘야하는데 없으니 Entity의 PrintPosition()이 호출된다.
	ref.PrintPosition();
	return 0;
}
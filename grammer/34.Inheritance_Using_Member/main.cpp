#include <iostream>
using namespace std;

class Entity {
protected:
	int x;
	int y;
public:
	Entity(int x, int y) : x{ x }, y{ y } {}
	void ShowPosition() {
		cout << "[Entity] Position: (" << x << ", " << y << ")" << endl;
	}
	void Talk() {
		cout << "[Entity] Talking..." << endl;
	}
};

class Player : public Entity {
private:
	int hp;
	int xp;
	int speed;
public:
	Player(int x, int y, int speed)
		: Entity(x, y), speed{ speed } {
	}
	void Move(int dx, int dy) {
		x += dx;
		y += dy;
		Entity::Talk(); // 부모의 Talk() 호출
	}
	// overriding
	void Talk() {
		cout << "[Player] Talking..." << endl;
	}
};



int main() {
	Entity e{ 1,1 };
	e.Talk();

	Player p{ 2,3,5 };
	p.Talk(); // overriding된 Talk()이 호출된다.

	e = p; // 업캐스팅, Entity 타입의 e가 Player 타입의 p로 대입이 된다. (업캐스팅)
	e.Talk(); // Entity의 Talk()이 호출된다. (업캐스팅)

	Entity p1 = Player{ 4,5,10 }; // 업캐스팅
	Entity* e2 = new Player{ 6,7,15 }; // 업캐스팅, p가 가지고 있는 entity 타입을 쓰는거기 떄문에 p의 메소드는 사용 불가능
	Entity& eRef = p;

	// Player& pPtr = new Entity{ 1,1 }; // 다운캐스팅, 부모는 자식의 타입을 갖고있지 않기 때문에 자식에다가 대입이 불가능하다.


}
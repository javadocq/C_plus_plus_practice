#include <iostream>
using namespace std;

class Base {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class Derived : public Base {
public:
	int d;
};

	class Entity {
	protected: // 만약 이게 private이면 Player 클래스에서 x, y에 접근할 수 없어서 Move 함수에서 오류가 발생한다.
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
		}
	};



int main() {
	Entity e{ 1,1 };
	e.ShowPosition();
	e.Talk();

	Player p{ 2,3,5 };
	p.ShowPosition(); // 상속을 받았기 때문에 가능
	p.Talk(); // 상속을 받았기 때문에 가능

	Derived d;
	d.a = 101;
	//d.b = 101; ERROR: 'b' is protected in 'Base'
	// d.c = 101; ERROR: 'c' is private in 'Base'
	
	cout << sizeof(Base) << endl; // 12 (4 + 4 + 4) -> 접근을 못할뿐이지 메모리에 저장이 안되는 건 아니다.
	cout << sizeof(Derived) << endl; // 16 (Base의 멤버 12 + Derived의 멤버 4)
}
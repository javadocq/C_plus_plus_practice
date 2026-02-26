#include <iostream>
using namespace std;

class Base {
public:
	void display()
	{
		cout << "Base class display function called." << endl;
	}
};

class Derived : public Base {

};

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
		: Entity(x, y), speed{ speed } {}
	void Move(int dx,  int dy) {
		x += dx; 
		y += dy;
	}
};

int main() {
	Base b;
	Derived d;

	d.display();

	Entity e{ 1,1 };
	e.ShowPosition();
	e.Talk();

	Player p{ 2,3,5 };
	p.ShowPosition(); // 상속을 받았기 때문에 가능
	p.Talk(); // 상속을 받았기 때문에 가능

}
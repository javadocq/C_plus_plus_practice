#include <iostream>

using namespace std;

class Entity {
public:
	void Print() {
		cout << "I am an entity!" << endl;
	}
};

class Player : public Entity {
public:
	void Print() {
		cout << "I am a player!" << endl;
	}
};

class Enemy : public Entity {
public:
	void Print() {
		cout << "I am an enemy!" << endl;
	}
};

class Boss : public Enemy {
public:
	void Print() {
		cout << "I am a boss!" << endl;
	}
};

int main() {
	Enemy* eptr = new Boss(); // is-A relationship, Boss is an Enemy
	eptr->Print(); // I am an enemy! -> 컴파일러는 선언 타입을 기준으로 미리 결정한다.
	return 0;
}

#include <iostream>

using namespace std;

class Player {
    string name;
    int health;
    int xp;

    void Talk(string text);
    bool IsDead();
};

int main() {
    Player p;

    Player* p2 = new Player(); // 클래스 객체 동적 할당
    delete p2;
}
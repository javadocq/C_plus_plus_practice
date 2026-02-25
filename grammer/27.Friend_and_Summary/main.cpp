#include <iostream>

using namespace std;

class Player {
    friend void DisplayPlayer(const Player& p); // 이렇게 friend 선언하면 이 함수에서 private에도 접근 가능
    friend class Other_class; // 다른 클래스에서 접근 가능하게 할 수 있다.
    public:
        Player(int x, int y, int speed)
            :x{x}, y{y}, speed{speed}
        {
            cout << this << endl;
        }
        void SetPosition(int x, int y) {
            this->x = x; 
            this->y = y;
        }
        // int GetPositionX() const { // 값을 안 바꾼다고 명시
        //     return x;
        // }
        // int GetPositionY() const {
        //     return y;
        // }
        
    private:
        int x;
        int y;
        int speed;
};

void DisplayPlayer(const Player& p) { // Player의 멤버 함수로 선언한 것이 아니다.
    //cout << p.x << ", " << p.y << endl; friend가 아니면 private 함수에 접근 불가능, 그렇다고 public으로 변수를 설정하기도 애매하다.
    // cout << p.GetPositionX() << ", " << p.GetPositionY() << endl;
    cout << p.x << ", " << p.y << endl; 
}

class Other_class {};

int main() {
    Player p1 {1, 2, 10};
    DisplayPlayer(p1);
}
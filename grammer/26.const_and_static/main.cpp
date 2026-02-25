#include <iostream>

using namespace std;

class Player {
    public:
        Player(int x, int y)
            :x{x}, y{y}
        {
            numPlayer++;
        }
        void SetPosition(int x, int y) {
            this->x = x; 
            this->y = y;
        }
        void PrintPosition() const { // const를 붙여서 이 함수는 값을 변경하는 것이 아니다라는 걸 컴파이러한테 명시적으로 알려준다.
            cout << x << ", " << y << endl;
        }
        static int getNumPlayer() {
            return numPlayer;
        }
    private:
        int x;
        int y;
        static int numPlayer; // static으로 선언하면 Player 객체에 공통적으로 shared 한다.
};

int Player::numPlayer = 0; // static 변수는 별도의 공간에 있기 때문에 별도로 초기화를 시켜줘야 한다.

int main() {
    const Player p{0, 0};
    p.PrintPosition(); // 값을 바꾸는 함수가 아닌데도 컴파일 오류가 난다. 왜? 컴파일러는 이 함수가 값을 바꿀지 안바꿀지 모르니까!!


    Player p1{0,0};
    Player p2{0,1};
    Player monster(1,0);
    
    cout << Player::getNumPlayer() << endl; // 보통 공유 데이터임을 나타내기 위해 클래스 이름을 통해 직접 호출
    cout << p1.getNumPlayer() << endl;
    cout << p2.getNumPlayer() << endl;
}
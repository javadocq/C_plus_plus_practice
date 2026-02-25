#include <iostream>

using namespace std;
class Player {
    public: 
        Player(int hp, int xp)
            : hp {hp}, xp {xp} // 값을 대입하는 다른 방식 (추천))
            {
                cout << "생성자 호출됌" << endl;
            }

        // 복사 생성자
        // Player(const Player& source) {
        //     cout << "복사 생성자 호출됌" << endl;
        // }

        Player(const Player& other) 
            : hp {other.hp}, xp {other.xp} // 이렇게 복사를 해줘야 다른 함수의 매개변수로 가거나 리턴할 때도 동일하게 오게 된다, 근데 안해도 잘 복사되어있게 되어있다.
            {

            }
        void Print() {
            cout << hp << " " << xp << endl;
        }
    private:
        int hp;
        int xp;
};

void PrintInformation(Player p) { // 이 함수가 호출될 때, main에 p 객체가 직접 오는 게 아니라 복사 생성자가 오는 거다.
    p.Print(); // 만약, 기본 복사 생성자만 있을 때는 쓰레기 값으로 뜨는 게 맞지만 컴파일러에 따라 알아서 그 객체의 값을 복사해서 오는 경우도 있따.
}

int main() {
    Player p{10, 2};

    PrintInformation(p); 
}
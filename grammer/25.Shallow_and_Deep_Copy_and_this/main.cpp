#include <iostream>

using namespace std;

class Player {
    public:
        Player(int x, int y)
            :x{x}, y{y}
        {}
        void SetPosition(int x, int y) {
            // x = x;이 게 명확하지 않아서 값이 제대로 들어가지 않는다.
            // y = y;
            this->x = x; // 여기서 this는  호출된 객체의 주소값을 가지고 있다. 그래서 (*this).x랑 동일
            this->y = y;
        }
    private:
        int x;
        int y;
};

int main() {
    Player p{0, 0};

    p.SetPosition(2, 5);
}
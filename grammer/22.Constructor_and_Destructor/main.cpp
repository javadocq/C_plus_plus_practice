#include <iostream>

using namespace std;

class Account {
    public:
        Account() { // 기본 생성자, 객체가 생성될 떄 자동 호출, 만약 인자를 무조건 받는 걸로 하고 싶으면 기본 생성자는 냅두고 아래껏만 둔다.
            cout << "계좌 생성됨" << endl;
            name = "Kim";
            balance = 1000;

            cout << name << " " << balance << endl;
        }
        Account(double val, string str) { // 인자가 있는 생성자
            cout << "계좌 생성됨" << endl;
            name = str;
            balance = val;

            cout << name << " " << balance << endl;
        }
        ~Account() {
            cout << "계좌 삭제됨" << endl;
        }
    private:
        string name;
        double balance = 0;
};

int main() {
    Account lee_count; // 기본 생성자 호출
    Account kim_account(2000.0, "Kim"); // 인자값 있는 생서자 호출
    return 0;
} //main 함수가 끝날 때 객체가 사라짐으로 자동 호출
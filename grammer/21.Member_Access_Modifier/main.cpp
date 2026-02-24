#include <iostream>
#include "Account.h"

using namespace std;

class Player {
    public:
        string name;
        int health;

        void Talk(string text);
        bool IsDead();
    private:
        int xp;

};

// struct Account {
//     string name;
//     void SetBalance(double bal);
// }

// class Account {
//     private: 
//         string name;
//         double balance = 0;
    

//     public:
//         void SetBalance(double bal);
//         double GetBalance();
//         bool Withdraw(double amount) {
//             if (balance - amount < 0) {
//                 return false;
//             }
//             balance -= amount;
//             return true;
//         }
//         bool Deposit(double amount) {
//             balance += amount;
//             return true;
//         }
// };

// void Account::SetBalance(double bal) {
//     balance = bal;
// }

// double Account::GetBalance() {
//     return balance;
// }


int main() {
    Player p;
    p.health = 10;

    cout << p.health << endl;

    // p.xp = 20; private라서 접근 불가능

    Player* p2 = new Player();
    (*p2).health = 20; // p2->health = 10; 이랑 동일
    cout << (*p2).health << endl;

    // Account kim_account;
    // kim_account.Withdraw(100);

    // Account lee_account;
    // lee_account.Withdraw(200);

    // cout << lee_account.GetBalance() << endl;

    // lee_account.SetBalance(500);
    // cout << lee_account.GetBalance() << endl;

    // lee_account.Deposit(200);
    // cout << lee_account.GetBalance() << endl;

    Account kim_account;
    kim_account.Deposit(200); // Account.cpp의 함수를 전진 선언 안해도 되는 이유는 Account.h가 그 역할을 대신하고 있기 때문이다.

    return 0;
}
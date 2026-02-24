#pragma once
#include <string>

class Account {
private:
    std::string name;
    double balance = 0;

public:
    bool Deposit(double amount); // Deposit body를 Account.cpp에서 구현
};
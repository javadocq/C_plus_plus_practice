#include <iostream>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.5); // 기본 값이 있는 경우에는 오른쪽부터 선언해야 한다. double base_cost = 100.0, double tax_rate 인 경우에는 에러 발생
int add_number(int, int);
double add_number(double, double);

int main() {
    double cost = 0;
    cost = calc_cost(100.0, 0.08, 4.5);
    cost = calc_cost(100.0, 0.08);
    cost = calc_cost(200.0);

    cout << add_number(10, 20) << endl;
    cout << add_number(10.0, 20.35) << endl;

    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

int add_number(int a, int b) {
    return a+b;
}

double add_number(double a, double b) {
    return a+b;
}
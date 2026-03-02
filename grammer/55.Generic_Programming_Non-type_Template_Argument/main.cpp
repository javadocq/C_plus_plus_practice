#include <iostream>
#include <string>

using namespace std;

template <typename T, int N>
class Array {
private:
	int size = N;
	T value[N]; // int value[5];
};


int main() {
	Array<int, 5> arr; // 매개변수를 넘길 수 있다.
	Array<double, 10> arr2;
	// <int, 5> <double, 10> 의 클래스가 2개 생성된 거랑 같다.

	return 0;
}
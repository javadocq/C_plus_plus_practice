#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
T1 MAX(T1 a, T2 b) {
	return (a > b) ? a : b;
}

template <> // type이 string인 경우에 대한 특수화 
string MAX(string a, string b) {
	return (a.length() > b.length()) ? a : b;
}


int main() {
	int a = 10;
	int b = 20;

	cout << MAX<int>(a, b) << endl;

	double c = 3.14;
	double d = 15.67;
	cout << MAX<double>(c, d) << endl;

	cout << MAX<int, double>(a, d) << endl; // 반환형이  T1<int>이기 때문에 15가 반환

	string str1 = "Hello";
	string str2 = "World!";
	cout << MAX(str1, str2) << endl; // string type인 경우니까 길이 비교로 들어간다.
}
#include <iostream>
#include <algorithm>
#include <set>
#include <list>
#include <map>

using namespace std;

template <typename T>
void PrintSet(T mySet) { // associative container 처럼 템플릿을 통해 이렇게 받을 수도 있다.
	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	map<string, int> m1{
		{"Lee", 20}, // key-value pair
		{"Kim", 30},
		{"Park", 25},
	};

	cout << m1["Kim"] << endl; // 30, key를 통해 value에 접근할 수 있다. 
	m1["Kim"] = 35; // value를 수정할 수도 있다.

	m1.insert(make_pair("Choi", 22)); // insert 함수를 통해서도 key-value pair를 추가할 수 있다.
	m1.insert({ "Choi", 22 }); // C++11 이후로는 initializer list를 통해서도 추가할 수 있다.
	m1["Park"] = 28; // 새로운 key-value를 추가
} 

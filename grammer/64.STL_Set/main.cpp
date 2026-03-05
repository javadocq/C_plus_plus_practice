#include <iostream>
#include <algorithm>
#include <set>
#include <list>

using namespace std;

template <typename T>
void PrintSet(T mySet) { // associative container 처럼 템플릿을 통해 이렇게 받을 수도 있다.
	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	set<int> s{ 1,2,3,4,5,5,5 };
	PrintSet<set<int>>(s);

	list<int> s1{ 1,2,3,4,5,5,5 };
	PrintSet<list<int>>(s1);

	auto it = s.find(5); // set은 자체적으로 find 메서드를 가지고 있다.
	s.clear(); // set은 자체적으로 clear 메서드를 가지고 있다.
}

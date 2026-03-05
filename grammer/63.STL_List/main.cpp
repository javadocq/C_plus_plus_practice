#include <iostream>
#include <array>
#include <algorithm>
#include <list>

using namespace std;

void PrintList(list<int> myList) {
	for (auto it = myList.begin(); it != myList.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	list<int> myList{ 1, 2, 3, 4, 5 };
	auto it = find(myList.begin(), myList.end(), 3);

	myList.insert(it, 10); // Insert 10 before the element 3
	PrintList(myList);
	myList.erase(it); // Remove the element 3
	PrintList(myList);
	// cout << myList[2] << endl; // This will cause a compilation error because std::list does not support operator[]
}

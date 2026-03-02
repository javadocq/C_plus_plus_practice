#include <iostream>
#include <string>

using namespace std;

template <typename T2, typename T1>
class Item {
private:
	T2 name;
	T1 value;
public:
	Item(T2 name, T1 value) : name(name), value(value) {};
	T2 GetName() const { return name; }
	T1 GetValue() const { return value; }
};

template <typename T1>
class Item<T1, double> { // double에 대한 특수화
private:
	T1 name;
	double value;
public:
	Item(T1 name, double value) : name(name), value(value) {};
	T1 GetName() const { return name; }
	double GetValue() const { return value; }
};

int main() {
	Item<string, int> i{ "A", 3 };
	cout << "Item name: " << i.GetName() << endl;
	cout << "Item value: " << i.GetValue() << endl;

	Item<string, double> q{ "B", 5.14 };
	cout << "Item name: " << i.GetName() << endl;
	cout << "Item value: " << i.GetValue() << endl;

	Item<string, string> s{ "C", "Hello" };
	cout << "Item name: " << i.GetName() << endl;
	cout << "Item value: " << i.GetValue() << endl;

	return 0;
}
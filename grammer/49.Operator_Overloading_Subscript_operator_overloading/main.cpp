#include <iostream>

using namespace std;

class Array {
private:
	int* ptr;
	int size;
public:
	Array(int val, int size) : size{ size } {
		ptr = new int[size];
		for (int i = 0; i < size; i++) {
			ptr[i] = val + i;
		}
	}
	int GetSize() const {
		return size;
	}
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] ptr;
			this->ptr = new int[other.size];
			this->size = other.size;
			for (int i = 0; i < size; i++) {
				this->ptr[i] = other.ptr[i];
			}
		}
		return *this;
	}
	~Array() {
		delete[] ptr;
	}
	int& operator[](int index) {
		if (index < 0 || index >= size) {
			cout << "Out of bounds!" << endl;
			exit(1); // 프로그램은 exit(0)으로 정상 종료되고, exit(1)로 비정상 종료됩니다.
		}
		return ptr[index];
	}

	int operator[](int index) const { // const 객체에서도 사용할 수 있도록 오버로딩
		if (index < 0 || index >= size) {
			cout << "Out of bounds!" << endl;
			exit(1);
		}
		return ptr[index];
	}
};

int main() {
	Array a{ 5, 10 };

	cout << a[1] << endl;
	a[1] = 10; // 컴파일 에러: operator[]가 int를 반환하기 때문에 불가능, 그래서 참조자를 반환하도록 해야한다.
	cout << a[1] << endl;

	const Array b{ 5, 10 };

	cout << b[2] << endl; // const를 붙이게 되면 오류 발생
	// 그래서 연산자 오버로딩을 int형 반환으로도 하나 만들어야 한다.


	return 0;
}
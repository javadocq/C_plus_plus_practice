#include <iostream>

using namespace std;

class Array {
private:
	int* ptr;
	int size;
public:
	Array(int val, int size) : size{ size } {
		ptr = new int[size]; // heap에 size만큼의 int 배열을 동적 할당 (첫 번째 주소값)
		for (int i = 0; i < size; i++) {
			ptr[i] = val + i; // 배열의 모든 요소를 val + i로 초기화
		}
	}
	int GetSize() const {
		return size;
	}
	int GetValue(int index) const {
		if (index < size && index >= 0) {
			return ptr[index];
		}
		else {
			cout << "Out of range!!" << endl;
		}
	}
	Array& operator=(const Array& other) {
		if (this != &other) { // 만약, self-assignment checking이 없다면, a=a; 와 같은 경우에도 이중 해제 발생
			// 이중 해제를 방지하기 위해 기존 메모리 해제
			delete[] ptr;
			// 새로운 메모리 할당 및 복사
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
};

int main() {
	Array a{ 5, 10 }; // Array 객체 a를 생성, 모든 요소가 5로 초기화된 크기 10의 배열};
	Array b{ 2, 2 };
	cout << a.GetValue(4) << endl; // 배열의 4번째 요소를 반환 (0-based index)
	cout << a.GetValue(2) << endl; // 배열의 2번째 요소를 반환 (0-based index)

	b = a; // 이렇게 되면 근데 이중해제가 발생한다.
	for (int i = 0; i < b.GetSize(); i++) {
		cout << b.GetValue(i) << endl;
	}
	return 0;
}
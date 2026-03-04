#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array<int, 5> arr{ 5, 2, 9, 1, 5 }; // 고정된 길이
	// 기존 배열은 int arr[5][5] 형태

	array<string, 3> strArr{ "Hello", "World", "C++" };

	cout << arr.size() << endl; // array의 길이
	cout << arr.empty() << endl; // array가 비어있는지 여부
	cout << arr[1] << endl; // 인덱스 접근
	cout << arr.at(2) << endl; // 범위 체크가 있는 접근 (배열의 크기를 벗어나면 예외 발생)

	int arr2[5] = { 5, 2, 9, 1, 5 }; // 기존 배열
	const int arr2_size = sizeof(arr2); // 기존 배열은 사이즈를 직접 저장해놔야하는 불편함 발생

	sort(arr.begin(), arr.end()); // array 정렬

	for_each(arr.begin(), arr.end(), [](int x) {
		cout << x << endl;
		});
}
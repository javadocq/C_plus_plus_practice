#include <iostream>

#define MAX_SIZE 100
#define MIN_SIZE 10 // 컴파일러가 MIN_SIZE를 10으로 치환, 만약 세미콜론을 붙이게 되면 10;이라는 문자열로 치환
#define MAX(a,b) ((a>b) ? a : b) // 매크로 함수, MAX(x,y)로 사용하면 (x > y) ? x : y로 치환

using namespace std;

int main() {
	int a = 100;
	int b = 200;

	cout << MAX(a, b) << endl; // 200, MAX(a,b)로 사용하면 (a > b) ? a : b로 치환되어 200이 출력

	double c = 3.14;
	double d = 5.14;
	cout << MAX(c, d) << endl; // 5.14, MAX(p1,p2)로 사용하면 (p1 > p2) ? p1 : p2로 치환되어 5.14가 출력
	// MAX(c,d)은 다음과 같이 치환된다.
	// cout << ((c > d) ? c : d) << endl;
}
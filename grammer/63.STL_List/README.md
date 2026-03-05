### List

/#include <list>

- Sequence 컨테이너
- 연속된 메모리 공간에 저장되지 않는다
- 요소에 대한 직접 접근 불가(.at() 또는 []로 접근 불가)
- 요소의 위치가 결정되면, 삽입과 삭제가 매우 효율적이다.

- 가변 크기의 
	-> 양방향 연결 리스트
- 특정 요소를 검색하는데 linear time

```csharp
list<int> myList{1,2,3,4,5};

myList = {2,3,4,5,6}; // 대입 연산자
myList.push_back(7); // 맨 뒤에 요소 추가
myList.push_front(0); // 맨 앞에 요소 추가
myList.pop_back(); // 맨 뒤 요소 제거
myList.pop_front(); // 맨 앞 요소 제거
myList.emplace_back(8); // 맨 뒤에 요소 추가 (생성자 호출)
myList.emplace_front(-1); // 맨 앞에 요소 추가 (생성자 호출)
```

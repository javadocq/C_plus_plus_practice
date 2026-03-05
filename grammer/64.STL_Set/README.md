### Associative 컨테이너

- Key를 이용한 빠른 데이터 검색이 가능
- 주로 Balanced binary tree 또는 hashset으로 구현
- 대부분의 연산이 빠르게 이루어진다.

### STL Set

/#include <set>

- 집합과 유사(중복된 요소 없음)
- key에 따라 자동 정렬
- 요소에 대한 직접 접근 불가
- 반복자가 유효하지 않을 수 있음

- multiset
	- key로 정렬
	- 요소의 중복 허용
- unordered_set
	- 요소의 중복 불가
	- 요소가 정렬되지 않는다.
	- 요소의 수정 불가
- unordered_multiset
	- 요소가 정렬되지 않는다.
	- 요소의 중복 허용
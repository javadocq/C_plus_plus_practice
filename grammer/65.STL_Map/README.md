### Map

/#include <map>

- Dictionary와 유사
- 요소가 key-value 쌍으로 저장
- key 값에 따라 정렬
- key는 유일해야 한다 (중복 허용 안됨)
- value는 중복 허용
- key를 통한 직접 접근 가능

- multimap
	- #include <map>에 포함
	- 중복된 요소를 허용
- unordered_map
	- #include <unordered_map>에 포함
	- 요소가 정렬되지 않는다.
- unordered_multimap
	- #include <unordered_map>에 포함
	- 요소가 정렬되지 않는다.
	- 중복된 요소를 허용
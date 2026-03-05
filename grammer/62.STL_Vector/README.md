### Vector

- 가변 크기 배열
- 요소에 대한 직접 접근(constant time)
- 요소의 끝 위치 삽입(push_back) 및 제거(pop_back) (constant time)
- 임의 위치에 요소의 삽입 및 제거(linear time)
- 반복자가 유효하지 않을 수 있다.

### front back

- vector<int> vec{1,2,3};

vec.front() -> 1 | 2 | 3 <- vec.back()

- 반환을 할 때, 해당 값이 있는 주소 값을 반환해준다고 생각하면 된다.

vec.push_back(4)

1 | 2 | 3 | 4

### vector의 주요 함수들

- push_back, pop_back, emplace_back

- push_back (복사 방식)
  내가 먼저 Person p1{"Kim"}을 만듭니다. (생성자 호출)

push_back(p1)을 하면, 벡터는 자기 빈 공간에 p1을 복사해서 넣습니다. (복사 생성자 호출)

결과적으로 메모리에 똑같은 객체가 2개가 생깁니다. (원본 + 벡터 안의 복사본)

- emplace_back (직접 생성 방식)
  벡터에게 "이름은 'Kim'으로 해서 하나 만들어줘!"라고 재료("Kim")만 던져줍니다.

벡터는 자기 빈 공간에서 직접 Person 생성자를 호출해 객체를 만듭니다.

복사 과정이 아예 생략됩니다.

- empty, swap, sort

- insert

### Friend 키워드

- Private 멤버에 대해 접근할 수 있는 함수나 클래스를 선언할 때 사용
- 비대칭
  -> A가 B의 friend일 때, B가 A의 friend는 아니다.
- 전이되지 않는다.
  -> A가 B의 friend, B가 C의 friend일 때, A->C는 X

- friend 클래스 구현 가능

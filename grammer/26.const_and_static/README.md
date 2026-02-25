### const 객체

- Const-correctness라는 원칙된 의거에 의해 정의되어 있다.
- Const 객체의 멤버 변수의 값은 변경 불가능
  - 25에서 만들었던 Player를 const Player p{1,1};로 만들었을 때
    p.SetPosition(2,2)를 호출하면 에러가 난다.

- 값을 변경하지 않을 때에는?
  - 컴파일러는 값을 바꾸는지 모르기 때문에 변경하지 않다는 것을 명시해주지 않으면 오류가 난다.
  - 멤버 함수 선언 뒤에 const
    -> void PrintPosition() const {}

### Static Class

- static 클래스 멤버 변수
  - 객체가 아닌 클래스에 속하는 변수
  - 개별적인 객체의 데이터가 아닌 클래스에 공통 데이터 구현이 필요할 때 사용

- static 클래스 멤버 함수
  - 객체가 아닌 클래스에 속하는 함수
  - Static 클래스 멤버 함수는 static 클래스 멤버 변수에만 접근 가능

### 복사 생성자

- 객체가 복사될 떄는, 기존 객체를 기반으로 새로운 객체가 생성된다.
- 객체가 복사되는 경우
  1. 객체를 pass by value 방식으로 함수의 매개변수로 전달할 때
  2. 함수에서 value의 형태로 결과를 반환할 때
  3. 기존 객체를 기반으로 새로운 객체를 생성할 때
- 객체가 어떤 방식으로 복사될 지 정의해 주어야 한다.
  -> 사용자가 구현하지 않는 경우 컴파일러에서 자동으로 복사 생성자를 정의한다.

- 왜 중요한가?
  -> 복사 과정에서 문제가 발생할 수 있다(포인터가 존재하는 경우)
  -> 복사 비용에 대한 인식(클래스는 많은 데이터를 포함할 수 있다)

### 객체가 복사되는 경우

- 아래의 경우에 복사 생성자가 자동으로 호출 된다.
  1. Pass by value로 객체 전달 예시

  ```
  void display_player(Player p) {
      // p is a copy of hero
      // use p
  } // destructor for p is called

  Player hero {0, 0, 1};
  display_player(hero);
  ```

  2. Value의 형태로 결과값 반환

  ```
  Player create_super_enemy() {
      Player an_enemy{1, 1, 1};
      return an_enemy; // copy of an_enemy is returned
  } // destructor for an_enemy is called

  Player enemey;
  enemy = create_super_enemy();
  ```

  3. 기존 객체를 기반으로 새로운 객체를 생성

  ```
  Player hero {1, 1, 1};

  Player another_hero = hero; // another hero is copy of hero
  // or Player another_hero {hero};
  ```

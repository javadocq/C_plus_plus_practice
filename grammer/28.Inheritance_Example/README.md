### Inhheritance

- 상속이 필요한 이유
  	- Player 이외에 Enemy, NPC 등 다양한 캐릭터가 존재할 수 있다.
    - Enemy, NPC 등 이동 방식이 Player와 다르다면?
        -> Enemy: dx*speed*1.5f;
        -> NPC: 이동 불가능
      - Enemy 및 NPC 클래스를 추가 구현했을 때, 기존의컨트롤러 코드가 변경되어야 한다.
    - 상속을 사용하면 이와 같은 문제를 쉽게 해결할 수 있다.
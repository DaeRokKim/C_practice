# 예제 문제 4-3

## 문제

앞서 연습한
Point.h, Point.c, ArrayList.h, ArrayList.c, PointListMain.c
파일들을 사용해

PointListMain.c의 main함수를 변경하지 않고 컴파일 하여 그 결과를 확인한다

ArryaList.h, ArrayList.c 대신 DLinkedList.h, DLinkedList.c를 사용해서 결과를 확인한다

typedef 선언 및 헤더파일 선언의 일부가 변경될 수 있다.

코드가 수정되는 부분은 없다

## solution

#### DLinkedList.h

- `#include "Point.h"` 추가
- typedef 선언문 변경 `typedef Point * LData`

#### PointListMain.c에

- `#include "Point.h"` 추가

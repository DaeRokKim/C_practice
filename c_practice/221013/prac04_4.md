# 폴더 pra4-3

# 예제문제 04-4

## 문제

앞서 예제04_3에서 연결 리스트의 정렬 기준을 등록하지 않았다.
이번에는 정렬 기준을 연결 리스트에 등록하여 결과를 확인하고자 한다.

- x 좌표 값을 기준으로 오름차순 정렬이 되게 한다.
- x 좌표 값이 같은 경우, y 좌표를 대상으로 오름차순이 정렬되게 한다.

예제 04_3에서 main 함수가 담겨있는 소스파일 하나만 변경하면 된다.

## solution

main 함수에 정렬 기준인 함수를 작성해야 한다.

```c
int SortFunc(Point *ppos1, Point *ppos2)
{
   if (ppos1->xpos < ppos2->xpos)
   {
      return 0;
   }
   else if (ppos1->xpos == ppos2->xpos)
   {
      if (ppos1->ypos < ppos2->ypos)
      {
         return 0;
      }
      else
      {
         return 1;
      }
   }
   else
   {
      return 1;
   }
}
```

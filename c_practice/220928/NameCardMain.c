#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main()
{
   List list;
   NameCard *pcard;
   ListInit(&list);

   // 데이터 3개 입력
   pcard = MakeNameCard("짱구", "010-1111-1111");
   LInsert(&list, pcard);

   pcard = MakeNameCard("맹구", "010-2222-2222");
   LInsert(&list, pcard);

   pcard = MakeNameCard("철수", "010-3333-3333");
   LInsert(&list, pcard);

   // 정보 출력하기
   printf("짱구 정보 탐색 후 출력 \n");
   if (LFirst(&list, &pcard))
   {
      if (!NameCompare(pcard, "짱구"))
      {
         ShowNameCardInfo(pcard);
      }
      else
      {
         while (LNext(&list, &pcard))
         {
            if (!NameCompare(pcard, "짱구"))
            {
               ShowNameCardInfo(pcard);
               break;
            }
         }
      }
   }
   printf("\n");

   // 전화번호 변경
   printf("맹구 탐색 후 전화번호 변경 \n");
   if (LFirst(&list, &pcard))
   {
      if (!NameCompare(pcard, "맹구"))
      {
         ChangePhoneNum(pcard, "010-7777-7777");
         ShowNameCardInfo(pcard);
      }
      else
      {
         while (LNext(&list, &pcard))
         {
            if (!NameCompare(pcard, "맹구"))
            {
               ChangePhoneNum(pcard, "010-7777-7777");
               break;
            }
         }
      }
   }
   printf("\n");

   // 정보 삭제
   printf("철수 정보 탐색 후 철수 데이터 삭제 \n");
   if (LFirst(&list, &pcard))
   {
      if (!NameCompare(pcard, "철수"))
      {
         pcard = LRemove(&list);
         free(pcard);
      }
      else
      {
         while (LNext(&list, &pcard))
         {
            if (!NameCompare(pcard, "철수"))
            {
               pcard = LRemove(&list);
               free(pcard);
               break;
            }
         }
      }
   }
   printf("\n");

   // 모든 데이터 출력
   printf("현재 데이터 수 : %d \n", LCount(&list));
   printf("모든 데이터 출력 \n");
   if (LFirst(&list, &pcard))
   {
      ShowNameCardInfo(pcard);

      while (LNext(&list, &pcard))
      {
         ShowNameCardInfo(pcard);
      }
   }
   printf("\n");

   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main()
{
   List list;
   NameCard *pcard;
   ListInit(&list);

   pcard = MakeNameCard("짱구", "010-1111-1111");
   LInsert(&list, pcard);

   pcard = MakeNameCard("맹구", "010-2222-2222");
   LInsert(&list, pcard);

   pcard = MakeNameCard("철수", "010-3333-3333");
   LInsert(&list, pcard);

   printf("현재 데이터 수 : %d \n\n", LCount(&list));
   printf("전체 데이터 \n");
   if (LFirst(&list, &pcard))
   {
      ShowNameCardInfo(pcard);

      while (LNext(&list, &pcard))
      {
         ShowNameCardInfo(pcard);
      }
   }
   printf("\n\n");

   // 특정 이름 대상으로 탐색 진행, 그 사람의 정보 출력
   // 짱구 탐색, 정보 출력
   if (LFirst(&list, &pcard))
   {
      if (NameCompare(pcard, "짱구") == 0)
      {
         ShowNameCardInfo(pcard);
      }
      else
      {
         while (LNext(&list, &pcard))
         {
            if (NameCompare(pcard, "짱구") == 0)
            {
               ShowNameCardInfo(pcard);
               break;
            }
         }
      }
   }
   printf("\n");

   // 특정 이름 대상으로 탐색 진행, 그 사람의 전화번호 정보 변경
   // 맹구 탐색, 맹구 전화번호 "010-7777-7777"로 변경
   if (LFirst(&list, &pcard))
   {
      if (NameCompare(pcard, "맹구") == 0)
      {
         ChangePhoneNum(pcard, "010-7777-7777");
         ShowNameCardInfo(pcard);
      }

      while (LNext(&list, &pcard))
      {
         if (NameCompare(pcard, "맹구") == 0)
         {
            ChangePhoneNum(pcard, "010-7777-7777");
            ShowNameCardInfo(pcard);
         }
      }
   }
   printf("\n");

   // 특정 이름 대상으로 탐색 진행, 그 사람의 정보 삭제 철수 탐색, 철수 삭제 if (LFirst(&list, &pcard))
   {
      if (NameCompare(pcard, "철수") == 0)
      {
         pcard = LRemove(&list);
         free(pcard);
      }
      else
      {
         while (LNext(&list, &pcard))
         {
            if (NameCompare(pcard, "철수") == 0)
            {
               pcard = LRemove(&list);
               free(pcard);
            }
         }
      }
   }
   printf("\n");

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
   printf("\n\n");

   return 0;
}
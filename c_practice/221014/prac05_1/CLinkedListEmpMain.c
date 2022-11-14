#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "Employee.h"

void nextWork(EMP *pemp, List list, const char *name, int day);

int main()
{
   List list;
   EMP *pemp;
   ListInit(&list);
   int i;

   pemp = AddEmployee(11111, "박효신");
   LInsert(&list, pemp);

   pemp = AddEmployee(22222, "나얼");
   LInsert(&list, pemp);

   pemp = AddEmployee(33333, "김동률");
   LInsert(&list, pemp);

   pemp = AddEmployee(44444, "이수");
   LInsert(&list, pemp);

   // 데이터 확인하기
   printf("현재 데이터 수 : %d \n\n", LCount(&list));

   if (LFirst(&list, &pemp))
   {
      ShowEmployee(pemp);
      printf("\n");

      for (i = 0; i < LCount(&list) - 1; i++)
      {
         if (LNext(&list, &pemp))
         {
            ShowEmployee(pemp);
            printf("\n");
         }
      }
   }
   printf("\n");

   nextWork(pemp, list, "박효신", 1);
   nextWork(pemp, list, "나얼", 2);
   nextWork(pemp, list, "김동률", 3);
   nextWork(pemp, list, "이수", 4);

   return 0;
}

void nextWork(EMP *pemp, List list, const char *name, int day)
{
   LFirst(&list, &pemp);

   if (strcmp(pemp->emp_name, name) != 0)
   {
      for (int i = 0; i < LCount(&list) - 1; i++)
      {
         LNext(&list, &pemp);

         if (strcmp(pemp->emp_name, name) == 0)
         {
            break;
         }
      }
   }

   for (int i = 0; i < day; i++)
   {
      LNext(&list, &pemp);
   }

   printf("%s 직원 %d일 후 근무할 직원은 : %s \n", name, day, pemp->emp_name);
}
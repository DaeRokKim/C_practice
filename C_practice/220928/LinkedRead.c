#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
   int data;
   struct _node *next;
} Node;

int main()
{
   Node *head = NULL;
   Node *tail = NULL;
   Node *cur = NULL;

   Node *newNode = NULL;
   int readData;

   // 데이터를 입력 받는 과정
   while (1)
   {
      printf("자연수 입력 : ");
      scanf("%d", &readData);
      if (readData < 1)
      {
         break;
      }

      // 노드의 추가과정
      newNode = (Node *)malloc(sizeof(Node));
      newNode->data = readData;
      newNode->next = NULL;

      if (tail == NULL)
      {
         tail = newNode;
      }
      else
      {
         head->next = newNode;
      }

      head = newNode;
   }

   printf("\n");

   // 입력 받은 데이터의 출력과정
   printf("입력 받은 데이터의 전체출력! \n");
   if (tail == NULL)
   {
      printf("저장된 자연수가 존재하지 않습니다. \n");
   }
   else
   {
      cur = tail;
      printf("%d ", cur->data);

      while (cur->next != NULL)
      {
         cur = cur->next;
         printf("%d ", cur->data);
      }
   }
   printf("\n\n");

   // 메모리의 해제과정
   if (tail == NULL)
   {
      return 0; // 해제할 노드가 존재하지 않음
   }
   else
   {
      Node *delNode = tail;
      Node *delNextNode = tail->next;

      printf("%d을(를) 삭제합니다. \n", tail->data);
      free(delNode); // 첫 번째 노드 삭제

      while (delNextNode != NULL) // 두 번째 이후 노드 삭제
      {
         delNode = delNextNode;
         delNextNode = delNextNode->next;

         printf("%d을(를) 삭제합니다. \n", delNode->data);
         free(delNode);
      }
   }

   return 0;
}
#include <stdio.h>
#include "BinaryTree1.h"

// 중위 순회 함수
void InorderTraverse(BTreeNode *bt)
{
   if (bt == NULL)
   {
      return;
   }

   InorderTraverse(bt->left);
   printf("%d \n", bt->data);
   InorderTraverse(bt->right);
}

int main()
{
   BTreeNode *bt1 = MakeBTreeNode();
   BTreeNode *bt2 = MakeBTreeNode();
   BTreeNode *bt3 = MakeBTreeNode();
   BTreeNode *bt4 = MakeBTreeNode();

   SetData(bt1, 1);
   SetData(bt2, 2);
   SetData(bt3, 3);
   SetData(bt4, 4);

   MakeLeftSubTree(bt1, bt2);
   MakeRightSubTree(bt1, bt3);
   MakeLeftSubTree(bt2, bt4);

   // // bt1의 왼쪽 자식 노드의 데이터 출력
   // printf("%d \n", GetData(GetLeftSubTree(bt1)));

   // // bt1의 왼쪽 자식 노드의 왼쪽 자식 노드의 데이터 출력
   // printf("%d \n", GetData(GetLeftSubTree(GetLeftSubTree(bt1))));

   // 중위 순회 함수를 사용한 출력
   InorderTraverse(bt1);

   return 0;
}
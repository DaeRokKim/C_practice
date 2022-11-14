#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree3.h"
#include "BinarySearchTree2.h"

void BSTMakeAndInit(BTreeNode **pRoot)
{
   *pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode *bst)
{
   return GetData(bst);
}

void BSTInsert(BTreeNode **pRoot, BSTData data)
{
   BTreeNode *pNode = NULL;
   BTreeNode *cNode = *pRoot;
   BTreeNode *nNode = NULL;

   while (cNode != NULL)
   {
      if (data == GetData(cNode))
      {
         return;
      }

      pNode = cNode;

      if (data < GetData(cNode))
      {
         cNode = GetLeftSubTree(cNode);
      }
      else
      {
         cNode = GetRightSubTree(cNode);
      }
   }

   nNode = MakeBTreeNode();
   SetData(nNode, data);

   if (pNode != NULL)
   {
      if (data < GetData(pNode))
      {
         MakeLeftSubTree(pNode, nNode);
      }
      else
      {
         MakeRightSubTree(pNode, nNode);
      }
   }
   else
   {
      *pRoot = nNode;
   }
}

BTreeNode *BSTSearch(BTreeNode *bst, BSTData target)
{
   BTreeNode *cNode = bst;
   BSTData cd;

   while (cNode != NULL)
   {
      cd = GetData(cNode);

      if (cd == target)
      {
         return cNode;
      }
      else if (target < cd)
      {
         cNode = GetLeftSubTree(cNode);
      }
      else
      {
         cNode = GetRightSubTree(cNode);
      }
   }

   return NULL;
}

BTreeNode *BSTRemove(BTreeNode **pRoot, BSTData target)
{
   // 가상의 루트 노드 생성
   // 삭제 대상이 루트 노드일 경우를 고려해야 한다.
   BTreeNode *pVRoot = MakeBTreeNode();

   BTreeNode *pNode = pVRoot;
   BTreeNode *cNode = *pRoot;
   BTreeNode *dNode;

   // 루트 노드를 가상의 루트노드의 오른쪽 서브 노드로 만든다
   ChangeRightSubTree(pVRoot, *pRoot);

   while (cNode != NULL && GetData(cNode) != target)
   {
      pNode = cNode;

      if (target < GetData(cNode))
      {
         cNode = GetLeftSubTree(cNode);
      }
      else
      {
         cNode = GetRightSubTree(cNode);
      }
   }

   if (cNode == NULL)
   {
      return NULL;
   }

   dNode = cNode;

   // 첫 번째 경우 삭제할 노드가 단말 노드
   if (GetLeftSubTree(dNode) == NULL && GetRightSubTree(dNode) == NULL)
   {
      if (GetLeftSubTree(pNode) == dNode)
      {
         RemoveLeftSubTree(pNode);
      }
      else
      {
         RemoveRightSubTree(pNode);
      }
   }

   // 두 번째 경우 삭제할 노드가 하나의 자식을 갖는 경우
   else if (GetLeftSubTree(dNode) == NULL || GetRightSubTree(dNode) == NULL)
   {
      // dNode의 자식 노드
      BTreeNode *dcNode;

      if (GetLeftSubTree(dNode) != NULL)
      {
         dcNode = GetLeftSubTree(dNode);
      }
      else
      {
         dcNode = GetRightSubTree(dNode);
      }

      if (GetLeftSubTree(pNode) == dNode)
      {
         ChangeLeftSubTree(pNode, dcNode);
      }
      else
      {
         ChangeRightSubTree(pNode, dcNode);
      }
   }

   // 세 번째 경우 삭제할 노드가 두 자식을 모두 가진 경우
   else
   {
      BTreeNode *mNode = GetRightSubTree(dNode);
      BTreeNode *mpNode = dNode;
      int delData;

      // 삭제 대상의 대체 노드 검색
      // 대체 노드는 대상의 오른쪽에서 가장 작은 값
      while (GetLeftSubTree(mNode) != NULL)
      {
         mpNode = mNode;
         mNode = GetLeftSubTree(mNode);
      }

      // 삭제 데이터 백업 및 대체 노드 데이터 삭제 데이터에 입력
      delData = GetData(dNode);
      SetData(dNode, GetData(mNode));

      if (GetLeftSubTree(mpNode) == mNode)
      {
         ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
      }
      else
      {
         ChangeRightSubTree(mpNode, GetRightSubTree(mNode));
      }

      dNode = mNode;
      SetData(dNode, delData);
   }

   if (GetRightSubTree(pVRoot) != *pRoot)
   {
      *pRoot = GetRightSubTree(pVRoot);
   }

   free(pVRoot);

   return dNode;
}

void ShowIntData(int data)
{
   printf("%d ", data);
}

void BSTShowAll(BTreeNode *bst)
{
   InorderTraverse(bst, ShowIntData);
}
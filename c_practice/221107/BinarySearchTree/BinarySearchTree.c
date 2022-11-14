#include <stdio.h>
#include "BinaryTree2.h"
#include "BinarySearchTree.h"

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

   // 새 노드가 추가될 위치 검색
   while (cNode != NULL)
   {
      if (data == GetData(cNode))
      {
         return;
      }

      pNode = cNode;

      if (GetData(cNode) > data)
      {
         cNode = GetLeftSubTree(cNode);
      }
      else
      {
         cNode = GetRightSubTree(cNode);
      }
   }

   // 새 노드 추가
   nNode = MakeBTreeNode();
   SetData(nNode, data);

   // pNode의 자식 노드로 새 노드 추가
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

      if (target == cd)
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
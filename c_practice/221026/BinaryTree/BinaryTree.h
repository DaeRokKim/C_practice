#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode
{
   BTData data;
   struct _bTreeNode *left;
   struct _bTreeNode *right;
} BTreeNode;

BTreeNode *MakeBTreeNode(void);           // 노드의 생성 및 초기화
BTData GetData(BTreeNode *bt);            // 노드에 저장된 데이터 반환
void SetData(BTreeNode *bt, BTData data); // 노드에 데이터 저장

BTreeNode *GetLeftSubTree(BTreeNode *bt); //
BTreeNode *GetRightSubTree(BTreeNode *bt);

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);

#endif
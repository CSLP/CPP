#include"List.h"
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<stdlib.h>
ListNode *createListNode(int value)
{
    ListNode*pNode=new ListNode();
    pNode->m_nValue=value;
    pNode->m_pNext=nullptr;
    return pNode;
}
void connectListNodes(ListNode*pCurrent,ListNode*pNext)
{
    if(pCurrent==nullptr)
    {
        printf("Error to connect two nodes.\n");
        exit(1);
    }
    pCurrent->m_pNext=pNext;
}
void printListNode(ListNode*pNode)
{
    if(pNode==nullptr)
        printf("The node is nullptr\n");
    else
    {
        printf("The key in node is %d.\n",pNode->m_nValue);
    }
}
void printList(ListNode*pHead)
{
    printf("PrintList starts.\n");
    ListNode* pNode=pHead;
    while(pNode!=nullptr)
    {
        printf("%d\t",pNode->m_nValue);
        pNode=pNode->m_pNext;
    }
    printf("\nPrintList ends.\n");
}
void destroyList(ListNode* pHead)
{
    ListNode* pNode=pHead;
    while(pNode!=nullptr)
    {
        pHead=pHead->m_pNext;
        delete pNode;
        pNode=pHead;
    }
}
void addToTail(ListNode**pHead,int value)
{
    ListNode* pNew=new ListNode();
    pNew->m_nValue=value;
    pNew->m_pNext=nullptr;
    if(*pHead==nullptr)
        *pHead=pNew;
    else
    {
        ListNode*pNode=*pHead;
        while(pNode->m_pNext!=nullptr)
            pNode=pNode->m_pNext;
        pNode->m_pNext=pNew;
    }
}
void removeNode(ListNode**pHead,int value)
{
    if(pHead==nullptr||*pHead==nullptr)
        return;
    ListNode* pToBeDeleted=nullptr;
    if((*pHead)->m_nValue==value)
    {
        pToBeDeleted=*pHead;
        *pHead=(*pHead)->m_pNext;
    }
    else
    {
        ListNode*pNode=*pHead;
        while(pNode->m_pNext!=nullptr&&pNode->m_pNext->m_nValue!=value)
            pNode=pNode->m_pNext;
        if(pNode->m_pNext!=nullptr&&pNode->m_pNext->m_nValue==value)
        {
            pToBeDeleted=pNode->m_pNext;
            pNode->m_pNext=pNode->m_pNext->m_pNext;
        }
    }
   if(pToBeDeleted!=nullptr) 
    {
        delete pToBeDeleted;
        pToBeDeleted=nullptr;
    }
}
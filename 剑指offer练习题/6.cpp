#include<stack>
#include"List.h"
#include<cstdio>
using std::stack;
void PrintListReversingly_Iteratively(const ListNode*pHead)
{
    if(pHead==nullptr) 
    {
        printf("Nothing.\n");
        return ;
    }
    stack<const ListNode*> iter;
    while(pHead!=nullptr)
    {
        iter.push(pHead);
        pHead=pHead->m_pNext; 
    }
    while(!iter.empty())
    {
        printf("%d ",iter.top()->m_nValue);
        iter.pop();
    }
}
void PrintListReversingly_Recursively(const ListNode*pHead)
{
    if(pHead==nullptr)
    {
        printf("Nothing.\n");
        return;
    }
    // if(pHead->m_pNext==nullptr)
    // {
    //     printf("%d ",pHead->m_nValue);
    // }
    // else 
    // {
    //     PrintListReversingly_Recursively(pHead->m_pNext);
    // }
    if(pHead->m_pNext!=nullptr)
        PrintListReversingly_Recursively(pHead->m_pNext);
    printf("%d ",pHead->m_nValue);
    
    

}
void test(ListNode*pHead)
{
    printList(pHead);
    PrintListReversingly_Iteratively(pHead);
    printf("\n");
    PrintListReversingly_Recursively(pHead);
}
void test1()
{
    printf("\nTest1 begins.\n");
    ListNode* pNode1=createListNode(1);
    ListNode* pNode2=createListNode(2);
    ListNode* pNode3=createListNode(3);
    ListNode* pNode4=createListNode(4);
    ListNode* pNode5=createListNode(5);
    connectListNodes(pNode1,pNode2);
    connectListNodes(pNode2,pNode3);
    connectListNodes(pNode3,pNode4);
    connectListNodes(pNode4,pNode5);
    test(pNode1);
    destroyList(pNode1);
}
void test2()
{
    printf("\ntest2 begins.\n");
    ListNode*pNode1=createListNode(1);
    test(pNode1);
    destroyList(pNode1);
}
void test3()
{
    printf("\nTest3 begins.\n");
    test(nullptr);
}
int main(int argc,char *argv[])
{
    test1();
    test2();
    test3();
    return 0;
}
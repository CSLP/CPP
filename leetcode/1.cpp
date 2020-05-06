#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<stack>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    {
        ListNode head(l1->val>l2->val?l1->val:l2->val);
    }
    else
    {
        if(l1)  ListNode head(l1->val);
        else    ListNode head(l2->val);
    }
    ListNode *p;
    while(l1||l2)
    {
        while(l1&&((l2&&l1->val<l2->val)||!l2) 
        {
            head->next=l1;l1=l1->next;
        }
    }
}
int main()
{
    cout<<isValid("]");
    system("pause");
}
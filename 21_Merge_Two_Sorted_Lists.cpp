#include <bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* dum = new ListNode(0);
        ListNode* cur = dum;
        while(l1 && l2) 
        {
            if(l1->val < l2->val) 
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else 
            {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1) cur->next = l1;
        else cur->next = l2;
        return dum->next;
    }
};
//
// Created by xutianqi on 2020/9/9.
//
# include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tmp, ten=0;
        ListNode* l3=new ListNode(-1);
        ListNode* h=l3;
        bool fwd = false;
        int sum;
        while (l1!=NULL && l2!=NULL)
        {
            sum=0;
            if (l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if (l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            if (fwd)
            {
                sum++;
            }
            l3->next=new ListNode(sum%10);
            h=h->next;
            fwd=sum>=10? true: false;

        }
        if(fwd)
        {
            h->next=new ListNode(1);
        }
        return l3->next;
    }
};
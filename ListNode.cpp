//
// Created by xutianqi on 2021/5/23.
//

#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    explicit ListNode(int x):val(x),next(nullptr){}
};

int main(){
    auto *p=new ListNode(1);
    auto *head=new ListNode(-1);

    ListNode* cur= head;
    vector<int> nums={1,2,3,4,5,6,9};
    for (int num:nums){
        auto *tmp=new ListNode(num);
        cur->next=tmp;
        cur=cur->next;
    }
    while (head){
        cout<<head->val<<endl;
        head=head->next;
    }
}

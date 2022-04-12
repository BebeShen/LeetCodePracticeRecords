#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* tmp=head;
        int length=0,sum=0;
        while(tmp!=NULL){
            tmp=tmp->next;
            length++;
        }
        length--;
        tmp=head;
        while(tmp!=NULL){
            if(tmp->val==1)
                sum+=pow(2,length);
            tmp=tmp->next;
            length--;
        }
        return sum;
    }
};

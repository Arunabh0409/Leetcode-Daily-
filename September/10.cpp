
//Question Link : https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // TC: O(n)
 // SC: O(1)

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* slow=head,*fast=head->next;
        if(head->next==NULL)return head;
        while(fast!=NULL){
            int value=__gcd(slow->val,fast->val);
            ListNode* temp=new ListNode(value);
            slow->next=temp;
            temp->next=fast;
            slow=fast;
            fast=fast->next;
        }
        return head;
    }
};
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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*curr=head;
        ListNode*skip=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        if(count-n == 0){
            return head->next;
        }
        else{
            int ele =count-n-1;
            while(ele){
                skip=skip->next;
                ele--;
            }

            skip->next=skip->next->next;
        }
        return head;
    }
};

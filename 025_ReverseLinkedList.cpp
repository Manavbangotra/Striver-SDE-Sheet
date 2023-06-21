// leetcode solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL,*next=NULL,*curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
}

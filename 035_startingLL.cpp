//leet code solution
class Solution {
public:
    ListNode* detectCycle(ListNode* head)
    {
        // base case
        if (head == NULL || head->next == NULL) return NULL;

        ListNode *slow = head, *fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                fast = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};

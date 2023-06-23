// leet code solution
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        if (headA == NULL || headB == NULL) return NULL; // Remember this case also, you forgot

        int len1 = 0, len2 = 0;
        ListNode *ptr1 = headA, *ptr2 = headB;
        while (ptr1 != NULL) {
            len1++;
            ptr1 = ptr1->next;
        }
        while (ptr2 != NULL) {
            len2++;
            ptr2 = ptr2->next;
        }
        ptr1 = headA, ptr2 = headB;
        if (len1 > len2) {
            int temp = len1 - len2;
            while (temp--) {
                ptr1 = ptr1->next;
            }
        } else {
            int temp = len2 - len1;
            while (temp--) {
                ptr2 = ptr2->next;
            }
        }

        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1 == ptr2) {
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};
// simplified or automatic difference calculation by technique
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        if (headA == NULL || headB == NULL) return NULL;

        ListNode *ptr1 = headA, *ptr2 = headB;

        while (ptr1 != ptr2) {
            ptr1 = (ptr1 == NULL) ? headB : ptr1->next;
            ptr2 = (ptr2 == NULL) ? headA : ptr2->next;
        }
        return ptr1;
    }
};

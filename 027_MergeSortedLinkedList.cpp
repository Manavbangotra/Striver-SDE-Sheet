//leetcode solution
class Solution{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
        // if any list is empty, return the other list
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        // l1 will always contain list of smaller value
        if (l1->val > l2->val)swap(l1, l2);   // l1 will contain smaller val always;
        ListNode *res = l1; // store l1 in result;

        // until any list is empty, run loop
        while (l1 != NULL && l2 != NULL){
            // Create a temp node which points to nullptr
            ListNode *temp = NULL;
            // while l1 has smaller element than l2, assign l1 to temp
            while (l1 != NULL && l1->val <= l2->val){
                temp = l1;
                l1 = l1->next;
            }
            // after loop l2 will have smaller value than l1
            temp->next = l2;
            // by swapping l1 and l2, l1 will contain smaller value
            swap(l1, l2);
        }
        //  return final result which is pointer to l1 list
        return res;
    }
};
// another very beautiful solution using recursion
class Solution{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        // If l1 is smaller than l2 (val)
        if (l1->val <= l2->val){ // l1 move ahead with 1 node less.
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{ // l2 move ahead with 1 node less.
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

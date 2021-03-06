// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Remove Duplicate from Sorted Linked List...

// Pre-defined list 
 // * Definition for singly-linked list.
 // struct ListNode {
 //    int val;
 //    struct ListNode *next;
 //  };

// Submitted Solution
struct ListNode* deleteDuplicates(struct ListNode* head){
    if (!head) return head;
    struct ListNode *temp = head;
    struct ListNode *temp1 = head->next;
    while(temp1 != NULL) {
        if (temp->val == temp1->val) {
            temp->next = temp1->next;
        } else {
            temp = temp->next;
        }
        temp1 = temp1->next;
    }
    return head;
} 

// Runtime: 16 ms, faster than 5.83%
// Memory Usage: 6.6 MB, less than 14.39%

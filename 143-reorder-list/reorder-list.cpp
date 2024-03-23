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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        ListNode* left=head->next;
        ListNode* slow=head;
        ListNode* temp=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=slow->next;
      //  cout<<right->val<<endl;
        ListNode* prev=NULL;
        ListNode* forw;
        while(right)
        {
            forw=right->next;
            right->next=prev;
            prev=right;
            right=forw;
        }
        slow->next=NULL;
         right = prev;

       // ListNode* temp = head;
        // Merge the two halves
        while (left && right) {
            ListNode* nextLeft = left->next;
            ListNode* nextRight = right->next;
            temp->next = right;
            right->next = left;
            temp = left;
            left = nextLeft;
            right = nextRight;
        }
        if (left) temp->next = left;
        if (right) temp->next = right;
       // return dummy->next;
    }
};
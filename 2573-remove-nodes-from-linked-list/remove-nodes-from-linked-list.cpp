class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* fwd;
        while (curr) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        ListNode* newH = reverse(head);
        int maxi = INT_MIN;
        ListNode* temp = newH;
        ListNode* prev = NULL;

        while (temp) {  // Corrected condition here
            if (temp->val < maxi) {
                prev->next = temp->next;
                temp = temp->next;
            } else {
                maxi = max(temp->val, maxi);
                prev = temp;  // Update the prev pointer here
                temp = temp->next;
            }
        }

        return reverse(newH);
    }
};

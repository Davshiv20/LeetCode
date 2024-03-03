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
    int sizeOfNode(ListNode* head) {
        ListNode* curr_head = head;
        int count = 0;
        while (curr_head != NULL) {
            count += 1;
            curr_head = curr_head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
            int listSize = sizeOfNode(head);

            if (listSize < k) {
                return head;
            }

            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* prevTail = dummy;
            ListNode* currHead = head;

            while (listSize >= k) {
                ListNode* prev = nullptr;
                ListNode* curr = currHead;
                ListNode* forw = nullptr;

                for (int i = 0; i < k; i++) {
                    forw = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = forw;
                }

                ListNode* tail = prevTail->next;
                prevTail->next = prev;
                tail->next = curr;
                prevTail = tail;
                currHead = curr;
                listSize -= k;
            }

            return dummy->next;
        
    }
};
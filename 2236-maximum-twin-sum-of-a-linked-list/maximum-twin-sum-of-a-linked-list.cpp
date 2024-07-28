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
    int sze(ListNode* head) {
        int count = 0;
        while (head != NULL) {
            count += 1;
            head = head->next;
        }
        return count;
    }
    int pairSum(ListNode* head) {
         if (head == nullptr) return 0;

        // Step 1: Traverse the list and store values in an array
        std::vector<int> values;
        ListNode* temp = head;
        while (temp != nullptr) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Calculate the maximum pair sum using the values array
        int maxSum = INT_MIN;
        int n = values.size();
        for (int i = 0; i < n / 2; ++i) {
            int pairSum = values[i] + values[n - 1 - i];
            maxSum = std::max(maxSum, pairSum);
        }

        return maxSum;
    }
};
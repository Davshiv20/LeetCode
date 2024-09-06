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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = head;
        int i = 0;
        int n = nums.size();
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        ListNode* prev = dummy;
        while ((temp!=NULL) && (i < n)) {
            if (s.find(temp->val)!=s.end()) {
                prev->next = temp->next;
                temp = temp->next;
            } else {    
                temp = temp->next;
                prev = prev->next;
            }
        }
        return dummy->next;
    }
};
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1 == nullptr || list1->next == nullptr) {
            return list1;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = list1;
        ListNode* prevA = dummy;
        ListNode* temp = list1;
        
        // Find the node before position a
        for(int i = 0; i < a; ++i) {
            prevA = temp;
            temp = temp->next;
        }
        
        ListNode* prevB = temp;
        

        for(int i = a; i <= b; ++i) {
            prevB = temp;
            temp = temp->next;
        }
        

        prevA->next = list2;
        
     
        ListNode* endList2 = list2;
        while(endList2->next != nullptr) {
            endList2 = endList2->next;
        }
        
   
        endList2->next = prevB->next;
        
        return dummy->next;
    }
};

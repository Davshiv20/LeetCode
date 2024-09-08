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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
     //   temp->next=head->next;
        while(temp)
        {
            
            count++;
            temp=temp->next;
        }
        temp=head;
        vector<ListNode*>ans;
        int s=count/k;
        int rem=count%k;
        ListNode* res=head;
        for(int i=0;i<k;i++)
        {
            int part=s+(rem>0);
            ListNode* phead=nullptr;
            ListNode* ptail=nullptr;
            for(int j=0;j<part;j++)
            {
                if(phead==nullptr)
                {
                    phead=ptail=temp;
                }
                else
                {
                    ptail->next=temp;
                    ptail=ptail->next;
                }
                if(temp)
                {
                    temp=temp->next;
                }
            
            }
            if(ptail)
            {
                ptail->next=nullptr;
            }
            ans.push_back(phead);
            rem=max(rem-1,0);
            
        }
        return ans;

        
    }
};
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
    int sze(ListNode* head)
    {
        ListNode* curr=head;
        int count=0;
        while(curr)
        {
            count+=1;
            curr=curr->next;
        }
        return count;
        
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int size=sze(head);
        k=k%size;
        int n=size-k;
      
        ListNode* curr=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=NULL;
        ListNode* forw;
        for(int i=0;i<n;i++)
        {
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        ListNode* curr2=prev;
        curr=forw;
        while(prev->next!=NULL)
        {
            prev=prev->next;
        }
        ListNode* prev2=NULL;
        for(int i=n;i<size;i++)
        {
            forw=curr->next;
            curr->next=prev2;
            prev2=curr;
            curr=forw;
        }       
        prev->next=prev2;
        ListNode* forw2;
        ListNode* prev3=NULL;
        for(int i=0;i<size;i++)
        {
            forw2=curr2->next;
            curr2->next=prev3;
            prev3=curr2;
            curr2=forw2;
        }
        head=prev3;
        return head;
    }
};
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
    // ListNode* reverse(ListNode* head)
    // {
    //     ListNode* temp=head;
    //     ListNode* prev=NULL;
    //     ListNode* forward;
    //     while(temp!=NULL)
    //     {
    //         forward=temp->next;
    //         temp->next=prev;
    //         prev=temp;
    //         temp=forward;
            
    //     }
    //     head=prev;
    //     return head;
    // }
    bool isPalindrome(ListNode* head) {
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // ListNode* r_head=head;
        // ListNode* prev=NULL;
        // ListNode* forward;
        // while(r_head)
        // {
        //     ListNode* temp=new ListNode(r_head->val);
        //     temp->next=prev;
        //     prev=temp;
        //     r_head=r_head->next;
        // }
        // bool flag=true;
        // while(head &&  prev )
        // {
            
        //     if(head->val!=prev->val)
        //     {   
        //         return false;
        //     }
    
        //     head=head->next;
        //     prev=prev->next;
           
        // }
        // return true;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* r_head=head;
        ListNode* prev=NULL;
        ListNode* forw;
        while(r_head)
        {
            ListNode* temp=new ListNode(r_head->val);
            temp->next=prev;
            prev=temp;
            r_head=r_head->next;
        }
        bool flag=true;
        while(head and prev)
        {
            if(head->val!=prev->val)
            {
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;
        
    }
};
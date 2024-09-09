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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int tot=m*n;
        int count=0;
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int sR=0;
        int eR=m-1;
        int sC=0;
        int eC=n-1;
        while(head!=NULL){
            for(int i=sC;head!=NULL && i<=eC;i++){
                ans[sR][i]=head->val;
                head=head->next;
            }
            sR++;
            for(int i=sR;head!=NULL && i<=eR;i++){
                ans[i][eC]=head->val;
                head=head->next;
            }
            eC--;
            for(int i=eC;head!=NULL && i>=sC;i--){
                ans[eR][i]=head->val;
                head=head->next;
            }
            eR--;
            for(int i=eR;head!=NULL && i>=sR;i--){
                ans[i][sC]=head->val;
                head=head->next;
            }
            sC++;
        }
        return ans;
        
    }
};
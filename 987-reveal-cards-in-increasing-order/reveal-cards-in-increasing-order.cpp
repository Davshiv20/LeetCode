class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        queue<int>q;
        vector<int>result(n);
        for(int i=0;i<n;i++)
        {
            q.push(i);
        }
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++)
        {
            int idx=q.front();
            q.pop();
            result[idx]=deck[i];
            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }
        return result;
    }
};
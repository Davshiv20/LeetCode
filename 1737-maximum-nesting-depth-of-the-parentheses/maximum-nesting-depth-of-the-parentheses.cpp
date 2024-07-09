class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxi=0;
        for(auto i:s)
        {
            if(i=='(') counter++;
            else if(i==')') counter--;

            maxi=max(counter,maxi);
        }
        return maxi;
    }
};
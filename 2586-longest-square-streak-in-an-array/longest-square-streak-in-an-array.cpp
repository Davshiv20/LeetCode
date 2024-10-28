class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int maxStreak=0;
        for(auto i:nums){
            int root=(int)sqrt(i);
            if(root*root==i && mp.find(root)!=mp.end()){
                mp[i]=mp[root]+1;
            }
            else{
                mp[i]=1;
            }
        }
        for(auto i:mp){
            if(maxStreak<i.second){
                maxStreak=i.second;
            }
        }
        return maxStreak>1 ? maxStreak: -1;
    }
};
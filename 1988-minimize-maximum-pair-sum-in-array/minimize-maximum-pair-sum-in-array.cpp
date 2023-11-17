class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int j=nums.size()-1;
        int i=0;
        int n=nums.size();
        int pairsize=n/2;
        vector<pair<int,int>>ans;
        while(i<j and j>0)
        {
            ans.push_back(make_pair(nums[i],nums[j]));
            i++;
            j--;
        }
        vector<int>sumarray(pairsize);
        for(int i=0;i<pairsize;i++)
        {
            sumarray[i]=ans[i].first+ans[i].second;
        }
        sort(sumarray.begin(),sumarray.end());
        return sumarray[pairsize-1];
    }
};
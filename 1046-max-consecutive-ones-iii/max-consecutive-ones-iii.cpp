class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int wind=0;
        int maxWind=0;
        unordered_map<int,int>mp;
        for(r=0;r<nums.size();r++)
        {
            mp[nums[r]]++;
            while(mp[0]>k)
            {
                cout<<"r"<<r;
               
               
                mp[nums[l]]--;
                l++;
                
                  cout<<"maxwind"<<maxWind<<endl;
            }
             maxWind=max(r-l+1,maxWind);
        }
        return maxWind;
    }
};
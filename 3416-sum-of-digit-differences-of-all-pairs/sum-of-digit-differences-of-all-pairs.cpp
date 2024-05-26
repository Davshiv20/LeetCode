class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int count=0;
        int a=nums[0];
        while(a>0)
        {
            count++;
            a=a/10;
        }
        vector<vector<int>>freq(count,vector<int>(10,0));
        for(int i=0;i<nums.size();i++)
        {
            string val=to_string(nums[i]);
            for(int i=0;i<val.size();i++)
            {
                freq[i][val[i]-'0']++;
            }
        }
        long long ans=0;
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<9;j++)
            {
                for(int k=j+1;k<10;k++)
                {
                    ans+=(freq[i][j]*freq[i][k]);
                }
            }
        }
        return ans;
    }
};
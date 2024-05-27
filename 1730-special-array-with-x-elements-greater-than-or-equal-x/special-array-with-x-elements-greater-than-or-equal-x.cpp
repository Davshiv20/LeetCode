class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<=n;i++)
        {
            int chk=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]>=i)
                {
                    chk++;
                }
            }
            if(chk==i)
            {
                return chk;
            }
            
        }
        return -1;
    }
};
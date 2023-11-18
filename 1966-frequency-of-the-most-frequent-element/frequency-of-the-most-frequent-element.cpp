class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // int freq=1;
        sort(nums.begin(),nums.end());
        // int n=nums.size();
        // bool flag=true;
        // for(int i=1;i<n;i++)
        // {
        //     if(nums[i]-nums[i-1]<=k)
        //     {
        //         int x=nums[i]-nums[i-1];
        //         k=k-x;
        //         freq+=1;
        //     }
        //     else
        //     {
        //         flag=false;
        //         continue;
        //     }
        // }
        // return freq;
              int n = nums.size();
        
        int result = 0;
        
        int i = 0;
        long currSum = 0;
        
        for(int j = 0; j<n; j++) {
            
            long target = nums[j];
            currSum   += nums[j];
            
            while((j-i+1)*target - currSum > k) {
                currSum -= nums[i];
                i++;
            }
            
            result = max(result, j-i+1);
            
        }
        return result;
    }
};
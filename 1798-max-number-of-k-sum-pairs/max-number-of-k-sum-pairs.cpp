class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int i=0;
       int j=nums.size()-1;
       int count=0;
       while(i<j)
       {
        int sum=nums[i]+nums[j];
        if(sum==k )
        {
            //  nums[j]=-1;
            i++;
            j--;
            count+=1;
          
        }
        else if(sum<k)
        {
            i++;
        }
        else if(sum>k)
        {
            j--;
        }
       }
       return count;
        
    }
};
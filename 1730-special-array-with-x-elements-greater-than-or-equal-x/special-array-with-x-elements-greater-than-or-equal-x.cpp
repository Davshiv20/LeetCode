class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high=n;
        while(low<=high)
        {
            int chk=0;
            int mid=low+(high-low)/2;
            for(int num:nums)
            {
                if(num>=mid)
                {
                    chk++;
                }
            }
            if(chk==mid)
            {
                return mid;
            }
            else if(chk>mid)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return -1;
    }
};
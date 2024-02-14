class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        int n=nums.size();
        vector<int>c;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                a.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        for(int i=0;i<a.size();i++)
        {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        return c;
    }
};
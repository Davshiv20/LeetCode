class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>res;
        bool flag=true;
        sort(nums.begin(),nums.end());
        for(int i=2;i<nums.size();i+=3)
        {
            vector<int>ans;
           if ((nums[i] - nums[i - 2] <= k) && (nums[i] - nums[i - 1] <= k))
            {
                cout<<"diff1: "<<(nums[i]-nums[i-2])<<endl;
                cout<<"diff2: "<< (nums[i]-nums[i-1])<<endl;
                ans.push_back(nums[i-2]);
                ans.push_back(nums[i-1]);
                ans.push_back(nums[i]);
                cout<<nums[i]<<endl;
              

            }
            else
            {
                flag=false;
                break;
                ans.clear();
            }
            res.push_back(ans);
            ans.clear();
           
        }
        if(flag)
        {
            return res;
        }
        else
        {
            res.clear();
            return res;
        }
    }
};
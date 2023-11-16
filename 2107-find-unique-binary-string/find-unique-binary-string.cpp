class Solution {
public:
    void solve(vector<string>&ans,string &op,int n)
    {
        if(n==0)
        {
            ans.push_back(op);
            return;
        }

        string op1=op;
        op1+="0";
        solve(ans,op1,n-1);
        string op2=op;
        op2+="1";
        solve(ans,op2,n-1);

    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string op="";
        vector<string>ans;
        solve(ans,op,n);
        int j=0;
        string res="";
        // for(int i=0;i<ans.size();i++)
        // {
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         if(ans[i]==nums[j])
        //         {
        //             continue;
        //         }
        //         else
        //         {
        //             res+=ans[i];
        //             break;
        //         }
        //     }
        // }
        // return res;
        sort(ans.begin(),ans.end());
        for (const auto& num : ans) {
        // Check if the element is not present in ans
        if (find(nums.begin(), nums.end(), num) == nums.end() && !num.empty()) {
            // Return the first element not present in ans
            res+=num;
            break;
        }
        }
         
    return res;
        
    }
};
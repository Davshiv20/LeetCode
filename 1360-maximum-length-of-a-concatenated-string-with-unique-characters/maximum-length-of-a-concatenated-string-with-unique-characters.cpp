class Solution {
public:
      int solve(int index,vector<string> &ans,vector<string> &arr)
    {
        if(index>=arr.size()) return 0;

        ans.push_back(arr[index]);
        unordered_map<char,int> m;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++) m[ans[i][j]]++;
        }

        bool flag=1;
        for(auto &val:m)
        {
            if(val.second>1)
            {
                flag=0;
                break;
            }
        }
        
        int opt1=0,opt2=0;
        if(flag) opt1=arr[index].size()+solve(index+1,ans,arr);
        ans.pop_back();
        opt2=solve(index+1,ans,arr);

        return max(opt1,opt2);

    }
    int maxLength(vector<string>& arr) {
        vector<string> ans;
        
        return solve(0,ans,arr);
    }
};
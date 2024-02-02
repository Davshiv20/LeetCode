class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        int n=to_string(low).size();
        int m=to_string(high).size();
        string s="123456789";
        vector<int>ans;
        set<int>st;
        for(int i=0;i<9;i++)
        {
            for(int window_size=n;window_size<m+1;window_size++)
            {   
                if(stoi(s.substr(i,window_size))>=low and stoi(s.substr(i,window_size))<=high )
                {
                    st.insert(stoi(s.substr(i,window_size)));
                }

            }
        }
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};
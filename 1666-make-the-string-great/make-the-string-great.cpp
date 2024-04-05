class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty() and st.top()+32==s[i])
            {
                st.pop();
            }
            else if(!st.empty() and s[i]+32==st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
       // ans+=s[s.size()-1];
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
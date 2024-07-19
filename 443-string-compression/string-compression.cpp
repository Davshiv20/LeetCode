class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int x=0;
        int y=0;
        while(y<chars.size())
        {
            int count=0;
            char curr=chars[x];
            while(y<chars.size() && curr==chars[y])
            {
                count++;
                y++;
            }
            if(count<=1)
            {
                s+=chars[x];
                x=y;
            }
            if(count>1)
            {
                s+=chars[x];
                s+=to_string(count);
                x=y;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            chars[i]=s[i];
        }
        cout<<s<<endl;
        return s.size();
        
    }
};
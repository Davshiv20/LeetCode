class Solution {
    private:
    string tolower(string s)
    {
        for(int i=0;i<s.length()-1;i++)
        {  
            if(s[i]>='A' and s[i]<='Z')
            {
                s[i]=s[i]-'A'+'a';
            }

        }
        return s;
    }
public:
    int longestPalindrome(string s) {
        tolower(s);
        int count=0;
        int arr[256]={0};
        for(int i=0;i<s.length();i++)
        {
            //int index=s[i]-'a';
            arr[s[i]]++;
        }
        int odd=0;
       // int count=0;
        for(int i=0;i<256;i++)
        {
            if(arr[i]%2==1)
            {
                count+=1;

            }
            // else
            // {
            //     if(arr[i]>odd)
            //     {
            //         odd=arr[i];
            //     }
            // }
            
        }
        if(count>1)
        {
            return s.length()-count+1;
        }
        return s.length();


        
    }
};
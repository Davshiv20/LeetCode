class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string res="";
        int n=word1.size();
        int m=word2.size();
        while(i<n && j<m)
        {
            
            res+=word1[i];
            i++;
            res+=word2[j];
            j++;
            
        }
        cout<<i<<endl;
        if(i==n)
            {
              
                string str=word2.substr(j,m-j);
                  res+=str;
               //   cout<<"string:"<<str<<endl;
            }
            else if(j==m)
            {
                res+=word1.substr(i,n-i);
            }
        return res;
        
    }
};
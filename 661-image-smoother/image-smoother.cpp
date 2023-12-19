class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        int c=0;
        int s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                c=0;
                s=0;

                int x1,y1,x2,y2;
                x1=i-1>=0?i-1:0;
                x2=i+1<n?i+1:n-1;
                y1=j-1>=0?j-1:0;
                y2=j+1<m?j+1:m-1;

                for(int x=x1;x<=x2;x++){
                    for(int y=y1;y<=y2;y++){
                        c+=img[x][y];
                        s++;
                    }
                }
                
            ans[i][j]=c/s;
                
            }
        }
        return ans;
    }
};
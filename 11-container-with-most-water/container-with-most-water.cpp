class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int j=height.size()-1;
        int i=0;
         int maxh=0;
         int maxW=0;
        
       while(j>=i)
       {
         
        int h=min(height[j],height[i]);
       
        
        maxArea=max(maxArea,h*(j-i));
        //cout<<h<<" "<<w<<" "<<area<<endl;
        if(height[i]<=height[j])
        {
            i++;
        }
        else{
            j--;
        }
       }
       return maxArea;
       
    }
};
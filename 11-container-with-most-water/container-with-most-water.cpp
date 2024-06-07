class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxi=0;
        
        while(r>=l)
        {
            int sm=min(height[l],height[r]);
            int area=sm*(r-l);
            maxi=max(area,maxi);
            if(height[l]<=height[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
        
    }
};
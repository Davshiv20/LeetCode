class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==1)
        {
            return 0;
        }
        vector<int>max_left_h(n,0);
        vector<int>max_right_h(n,0);
        vector<int>water(n,0);
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(height[i],maxi);
            max_left_h[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=1;i--)
        {   
            maxi=max(height[i],maxi);
            max_right_h[i]=maxi;            
        }
        int sum=0;
        for(int i=1;i<n-1;i++)
        {
            water[i]=min(max_left_h[i],max_right_h[i])-height[i];
            // if(water[i]>0)
            // {
                sum+=water[i];
            // }
        }
        return sum;
        
    }
};
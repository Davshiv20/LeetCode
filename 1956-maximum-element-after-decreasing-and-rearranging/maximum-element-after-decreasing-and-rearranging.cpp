class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1]<=1))
            {
                continue;
            }
            else
            {
                arr[i]=arr[i-1]+1;
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
        return maxi;
    }
};
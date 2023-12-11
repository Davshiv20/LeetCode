class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int count=1;
        int num;
        if(n==1)
        {
            return arr[0];
        }
        for(int i=0;i<arr.size()-1;i++)
        {
           
            if(arr[i]==arr[i+1])
            {
                count++;
                num=arr[i];
            }
            else
            {
                count=1;
            }
            if(count>=0.25*n)
            {
                ans=num;
            }
        }
        return ans;
    }
};
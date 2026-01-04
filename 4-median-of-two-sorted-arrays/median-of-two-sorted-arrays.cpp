class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n>m){
            return findMedianSortedArrays(nums2,nums1);
        }
        int low = 0;
        int high = n;
        while(low<=high){
            int Px = low+(high-low)/2;
            int Py = (m+n+1)/2 - Px;
            int x1 =(Px==0)?INT_MIN: nums1[Px-1];
            int x2 = (Py==0)?INT_MIN: nums2[Py-1];
            int x3 = (Px==n)? INT_MAX: nums1[Px];
            int x4 = (Py==m)? INT_MAX: nums2[Py];
            if(x1<=x4 && x2<=x3){
                if((n+m)%2==0){
                    return (max(x1,x2)+min(x4,x3))/2.0;
                }
                return max(x1,x2);
            }
            if(x1>x4){
                high = Px-1;
            }
            else
            {
                low = Px+1;
            }
        }
        return 1;
    }
};
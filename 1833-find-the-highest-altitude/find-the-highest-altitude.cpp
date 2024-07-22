class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < gain.size(); i++) {
            maxi = max(maxi, sum);

            sum += gain[i];
            cout << sum << " ";
        }
        maxi=max(maxi,sum);
        return maxi;
    }
};
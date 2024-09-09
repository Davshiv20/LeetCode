class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> vec;
        int n = potions.size();
        sort(potions.begin(), potions.end()); 

        for(int i=0;i<spells.size();i++){
            long potions_needed=(success+spells[i]-1)/spells[i];
            int low=0;
            int high=potions.size();
            while(low<high){
                int mid=low+(high-low)/2;
                if(potions[mid]>=potions_needed){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            vec.push_back(potions.size()-low);
        }
        return vec;
    }
};

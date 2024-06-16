class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int pairs=0;
        for(int i=0;i<hours.size();i++)
        {
            int half=hours[i];
            for(int j=i+1;j<hours.size();j++)
            {
                if((hours[j]+half)%24==0)
                {
                    pairs++;
                }
            }
            
        }
        return pairs;
    }
};
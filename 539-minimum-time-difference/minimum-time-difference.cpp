class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
    
        vector<int>min;
        for(int i=0;i<timePoints.size();i++){
            int minutes=(stoi(timePoints[i].substr(0,2))*60) ;
            minutes+=stoi(timePoints[i].substr(3,2));
            if(minutes==0){
                minutes=1440;
            }
            min.push_back(minutes);
        }
        sort(min.begin(),min.end());
        int minDiff=INT_MAX;
        for(int i=1;i<min.size();i++){
            int diff=min[i]-min[i-1];
            if(diff<minDiff){
                minDiff=diff;
            }
        }
        return std::min(minDiff,(24*60-min[min.size()-1]+min[0]));
    }
};
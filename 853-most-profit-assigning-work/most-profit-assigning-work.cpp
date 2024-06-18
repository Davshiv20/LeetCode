class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector<pair<int,int>>v;
       for(int i=0;i<difficulty.size();i++)
       {
            v.push_back({difficulty[i],profit[i]});
       }
       sort(v.begin(),v.end());
       for(int i=1;i<v.size();i++)
       {
        v[i].second=max(v[i].second,v[i-1].second);
       }
       int totProfit=0;
       for(int i=0;i<worker.size();i++)
       {
        int x=worker[i];
        int start=0;
        int maxProfit=0;
        int end=v.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(v[mid].first<=x)
            {
                maxProfit=max(maxProfit,v[mid].second);
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        totProfit+=maxProfit;
       }
       return totProfit;
    }
};
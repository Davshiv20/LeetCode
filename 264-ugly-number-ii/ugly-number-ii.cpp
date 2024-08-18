class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>primes={2,3,5};
        priority_queue<long, vector<long>,greater<long>>mH;
        unordered_set<long>st;
        mH.push(1);
        st.insert(1);
        long res;
        for(int i=0;i<n;i++){
            res=mH.top();
            mH.pop();
            for(int prime:primes){
                long ans=res*prime;
                if(st.find(ans)==st.end()){
                    st.insert(ans);
                    mH.push(ans);
                } 
            }
        }
        return (int)res;
    }
};
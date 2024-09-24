class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int> st;
        for (auto i : arr1) {
            string val = to_string(i); 
            string prefix = "";
            for (int j = 0; j < val.size(); j++) {
                prefix.push_back(val[j]); 
                st.insert(stoi(prefix));  
                                         
            }
        }

        int n = arr2.size();
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            int l = 0;
            string val = to_string(arr2[i]);
            string str = "";
            for (int j = 0; j < val.size(); j++) {

                str.push_back(val[j]);
                if (!str.empty()) {
                    int x = stoi(str);
                    if (st.find(x) != st.end()) {
                        count += 1;
                    }
                }
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
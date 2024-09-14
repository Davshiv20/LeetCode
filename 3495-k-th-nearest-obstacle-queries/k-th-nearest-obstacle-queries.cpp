class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int> pq;
        vector<int> res;

        for (int i = 0; i < queries.size(); i++) {
            int x = queries[i][0];
            int y = queries[i][1];
            int dist = abs(x) + abs(y);

            pq.push(dist);

            if (pq.size() < k) {
                res.push_back(-1);
            } else {
                if (pq.size() > k) {
                    cout << pq.top() << " ";
                    pq.pop();
                }
                cout << endl;
                res.push_back(pq.top());
            }
        }
        return res;
    }
};
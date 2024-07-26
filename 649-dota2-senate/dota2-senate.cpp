class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>qd;
        queue<int>qr;
        for(int i=0;i<senate.size();i++)
        {
            (senate[i]=='R') ?qr.push(i):qd.push(i);
        }     
        int n=senate.size();
        while(!qd.empty() && !qr.empty())
        {
            int qr_id=qr.front();
            int qd_id=qd.front();
            qr.pop();
            qd.pop();
            (qr_id>qd_id)? qd.push(qr_id+n) : qr.push(qd_id+n);
        }
        return (qd.size()>qr.size())?"Dire":"Radiant";
    }
};
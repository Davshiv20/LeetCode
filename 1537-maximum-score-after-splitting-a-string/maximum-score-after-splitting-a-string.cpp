class Solution {
public:
    int maxScore(string s) {
        int countOnes=0;
        int countZeros=0;
        int maxO=0;
        int maxZ=0;
        int zero=1;
        while(zero<s.size())
        {
            for(int i=0;i<zero;i++)
            {
                if(s[i]=='0')
                {
                    countZeros++;
                }
            }
            for(int i=zero;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    countOnes++;
                }
            }
            if(maxO<countOnes+countZeros)
            {
                maxO=countOnes+countZeros;
            }
            countOnes=0;
            countZeros=0;
            zero++;

        }
        return maxO;
    }
};
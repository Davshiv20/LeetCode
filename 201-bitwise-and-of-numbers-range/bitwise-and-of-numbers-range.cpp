class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       if (left == right) {
            return left; // or return right, they are equal
        }
        
        // int result=left;

        

        // for (int i = left + 1; i <= right; i++) {
        //     result=result&i;
        //     if(result==0)
        //     {
        //         break;
        //     }
        // }
        // return result;

        int shift=0;
        while(left!=right)
        {
            left>>=1;
            right>>=1;
            shift++;
        }
        return left<<shift;
    }
};
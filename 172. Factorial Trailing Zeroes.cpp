//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int zero=0;
        long i=5;
        long m=n;
        if (n==0)
            return false;
        if (n==1)
            return false;
        while(m>1){
           m=n/i;
           zero+=m;
            i=i*5;
        }
        return zero;
    }
};

//https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
    long int low = 0;
    long int up = x;
    long int mid;
        while (low <= up)
        {
            mid = (low + up) / 2;
            if (mid * mid == x)
                return mid;
            if ((mid * mid < x) && ((mid + 1) * (mid + 1) > x))
                return mid;
            if (mid * mid < x)
                low = mid + 1;
            if (mid * mid > x)
                up = mid - 1;
        }        
        return 0;
    }
};

class Solution {
public:
    long long int binaryser(int x) {
        int start = 0;
        int end = x;
        long long int ans = -1;
        while (start <= end) {
            long long int mid = start + (end - start) / 2;
            if (mid * mid == x) {
                return mid;
            }
            if (mid * mid < x) {
                ans = mid;
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
            return ans;
    }

    int mySqrt(int x) {
        
        return binaryser(x);
     }
};
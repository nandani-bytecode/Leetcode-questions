class Solution {
public:
    int mySqrt(int x) {
        int lo = 0, hi = x;
        int ans = 0;
        while(lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long sq = mid * mid;
            if(sq <= x) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
};

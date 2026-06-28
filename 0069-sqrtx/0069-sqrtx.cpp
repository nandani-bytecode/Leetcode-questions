class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;   // special case

        int lo = 1, hi = x;
        int ans = 0;
        while(lo <= hi) {
            long long mid = lo + (hi - lo) / 2;   // mid as long long
            long long sq = mid * mid;             // safe multiplication
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

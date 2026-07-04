class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, int speed) {
        long long time = 0;
        for(int bananas : piles) {
            // ceil(bananas / speed) → (bananas + speed - 1) / speed
            time += (bananas + speed - 1) / speed;
            if(time > h) return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int ans = hi;

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(canEatAll(piles, h, mid)) {
                ans = mid;      // possible, try smaller speed
                hi = mid - 1;
            } else {
                lo = mid + 1;   // not possible, need faster speed
            }
        }
        return ans;
    }
};

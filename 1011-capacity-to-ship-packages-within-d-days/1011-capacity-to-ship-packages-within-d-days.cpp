class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int usedDays = 1;
        int currentLoad = 0;
        for(int w : weights) {
            if(w > capacity) return false; // single package too heavy
            if(currentLoad + w > capacity) {
                usedDays++;
                currentLoad = w;
                if(usedDays > days) return false;
            } else {
                currentLoad += w;
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 0, hi = 0;
        for(int w : weights) {
            hi += w; // maximum capacity = sum of all weights
        }

        int ans = hi;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(canShip(weights, days, mid)) {
                ans = mid;      // possible, try smaller capacity
                hi = mid - 1;
            } else {
                lo = mid + 1;   // not possible, need larger capacity
            }
        }
        return ans;
    }
};

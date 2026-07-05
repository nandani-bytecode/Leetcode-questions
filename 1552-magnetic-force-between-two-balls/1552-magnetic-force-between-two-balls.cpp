class Solution {
public:
    bool canPlace(vector<int>& position, int m, int dist) {
        int count = 1; // place first ball at position[0]
        int lastPos = position[0];
        for(int i = 1; i < position.size(); i++) {
            if(position[i] - lastPos >= dist) {
                count++;
                lastPos = position[i];
                if(count >= m) return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int lo = 1; // minimum possible distance
        int hi = position.back() - position.front(); // maximum possible distance
        int ans = lo;

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(canPlace(position, m, mid)) {
                ans = mid;      // feasible, try larger distance
                lo = mid + 1;
            } else {
                hi = mid - 1;   // not feasible, reduce distance
            }
        }
        return ans;
    }
};

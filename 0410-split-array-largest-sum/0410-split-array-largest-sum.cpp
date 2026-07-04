class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long maxSum) {
        long long currentSum = 0;
        int count = 1; // number of subarrays formed
        for(int num : nums) {
            if(num > maxSum) return false; // single element exceeds maxSum
            if(currentSum + num > maxSum) {
                // start a new subarray
                count++;
                currentSum = num;
                if(count > k) return false;
            } else {
                currentSum += num;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long lo = 0, hi = 0;
        for(int num : nums) {
            hi += num; // maximum possible sum (all in one subarray)
        }

        int ans = hi;
        while(lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if(canSplit(nums, k, mid)) {
                ans = mid;
                hi = mid - 1; // try smaller maximum
            } else {
                lo = mid + 1; // need larger maximum
            }
        }
        return ans;
    }
};

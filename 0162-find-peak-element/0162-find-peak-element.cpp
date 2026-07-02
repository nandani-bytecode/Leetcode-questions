class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] > nums[mid + 1]) {
                // Peak lies on the left side (including mid)
                r = mid;
            } else {
                // Peak lies on the right side
                l = mid + 1;
            }
        }
        return l; // or r, both point to a peak
    }
};

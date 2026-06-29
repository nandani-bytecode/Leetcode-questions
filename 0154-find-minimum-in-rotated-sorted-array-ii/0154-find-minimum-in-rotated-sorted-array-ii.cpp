class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            if(nums[mid] > nums[hi]) {
                // Minimum lies in the right half
                lo = mid + 1;
            } else if(nums[mid] < nums[hi]) {
                // Minimum lies in the left half (including mid)
                hi = mid;
            } else {
                // nums[mid] == nums[hi], duplicates → shrink search space
                hi--;
            }
        }
        return nums[lo]; // lo points to the minimum element
    }
};

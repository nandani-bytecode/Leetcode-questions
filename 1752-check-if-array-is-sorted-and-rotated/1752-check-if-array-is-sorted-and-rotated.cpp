class Solution {
public:
    bool helper(vector<int>& nums, int i, int n, int count) {
        if (i == n) return count <= 1;

        
        if (nums[i] > nums[(i+1) % n]) {
            count++;
        }
        return helper(nums, i+1, n, count);
    }

    bool check(vector<int>& nums) {
        
        return helper(nums, 0, nums.size(), 0);
    }
};

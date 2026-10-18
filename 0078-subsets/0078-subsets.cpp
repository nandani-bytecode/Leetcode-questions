class Solution {
    void generateSubsets(vector<int>& nums, int index, vector<int>& curr, vector<vector<int>>& result) {
        // base case: if we've considered all elements
        if (index == nums.size()) {
            result.push_back(curr);
            return;
        }

        // choice 1: exclude nums[index]
        generateSubsets(nums, index + 1, curr, result);

        // choice 2: include nums[index]
        curr.push_back(nums[index]);
        generateSubsets(nums, index + 1, curr, result);

        // backtrack
        curr.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> result;
        vector<int> curr;
        generateSubsets(nums, 0, curr, result);
        return result; 
    }
};
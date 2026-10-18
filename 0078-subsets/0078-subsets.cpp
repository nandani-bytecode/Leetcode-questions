// class Solution {
//     void generateSubsets(vector<int>& nums, int index, vector<int>& curr, vector<vector<int>>& result) {
//         // base case: if we've considered all elements
//         if (index == nums.size()) {
//             result.push_back(curr);
//             return;
//         }

//         // choice 1: exclude nums[index]
//         generateSubsets(nums, index + 1, curr, result);

//         // choice 2: include nums[index]
//         curr.push_back(nums[index]);
//         generateSubsets(nums, index + 1, curr, result);

//         // backtrack
//         curr.pop_back();
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//        vector<vector<int>> result;
//         vector<int> curr;
//         generateSubsets(nums, 0, curr, result);
//         return result; 
//     }
// };


class Solution {
public:
    vector<vector<int>> result;
    void solve(int i ,vector<int>& nums,vector<int>& temp){
        if(i>= nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
        temp.pop_back();
        solve(i+1,nums,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;

        solve(0, nums, temp);

        return result;
    }
};
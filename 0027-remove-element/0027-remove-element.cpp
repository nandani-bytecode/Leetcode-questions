class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l_ptr = 0;
        for (int r_ptr = 0; r_ptr < nums.size(); r_ptr++) {
            if (nums[r_ptr] != val) {
                nums[l_ptr] = nums[r_ptr];
                l_ptr++;
            }
        }
        return l_ptr; 
    }
};

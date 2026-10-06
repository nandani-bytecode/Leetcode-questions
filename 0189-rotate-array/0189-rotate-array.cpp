class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // vector<int> nums2[nums.size()];
        // int j=0;
        // for(int i=nums.size()-k;i<nums.size();i++){
        //     nums2[j] = nums[i];
        //     j++;
        // }
        // for(int i=0;i<nums.size()-k;i++){
        //     nums2[j+k] = nums[i];
        //     j++;
        // }
        // for(int i=0; i<nums.size();i++){
        //     nums[i] = nums2[i];
        // }
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
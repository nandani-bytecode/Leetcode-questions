// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int i=0,j=0;
//         vector<int> vt;
//         while(i<nums.size() && j<nums.size()){
//             if(nums[i]<0){
//                while(nums[i]<0){
//                 i++;
//                }
//                vt.push_back(nums[i]);
//                vt.push_back(nums[j]);
//                j++;
//             }
//             else{
//                 vt.push_back(nums[i]);
//                 i++;
//                 while(nums[j]>0){
//                     j++;
//                 }
//                 vt.push_back(nums[j]);
//             }
//         }
//         return vt;
//     }
// };


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        for (int num : nums) {
            if (num > 0) pos.push_back(num);
            else neg.push_back(num);
        }
        
        vector<int> result;
        int i = 0, j = 0;
        while (i < pos.size() && j < neg.size()) {
            result.push_back(pos[i++]);
            result.push_back(neg[j++]);
        }
        
        return result;
    }
};

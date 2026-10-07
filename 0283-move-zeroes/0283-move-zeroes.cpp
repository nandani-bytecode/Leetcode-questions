class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //int i=0;
        // int j=1;
        // while(j<nums.size()){
        //     if(nums[i] == 0 && nums[j] != 0){
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j++;
        //     }
        //     else if(nums[i] != 0 && nums[j] != 0){
        //         i++;
        //         j++;
        //     }
        //     else if(nums[i] != 0 && nums[j] == 0){
        //         j++;
        //         i++;
        //         swap(nums[i],nums[j]);
        //     }
        //     else{
        //         j++;
        //     }
        // }
        // return ;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        }
    
    
};
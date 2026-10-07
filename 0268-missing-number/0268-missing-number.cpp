class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        
        while(i<=nums.size()){
            bool flag = false;
            for(int j=0;j<nums.size();j++){
                if(nums[j] == i){
                   flag = true;
                }
            }
             if(flag == false) break;
            i++;
        }
         return i;
    }
};
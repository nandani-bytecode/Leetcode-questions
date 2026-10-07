class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        
        while(i<=nums.size()){
            int count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] == i){
                   count++;
                }
            }
             if(count == 0) break;
            i++;
        }
         return i;
    }
};
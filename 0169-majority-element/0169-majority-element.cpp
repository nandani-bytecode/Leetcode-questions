class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=1;
        sort(nums.begin(),nums.end());
        int j=1;
        int i=0;
        while(j<n){
            if(nums[i] == nums[j]) {
            count++;
            if(count>n/2) return nums[i];
            j++;
            }
            else{
                i=j;
                j++;
            }
        }
        
        return nums[i];

    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ans=0;
        int s = nums.size();
        int i=0;
        
        while(ans<3 && i<s){
            if(nums[i] != ans){
                bool flag = false;
                for(int j=i+1; j<s ; j++){
                    if(nums[j] == ans){
                        swap(nums[i],nums[j]);
                        flag = true;
                       break;
                    }
                    
                }
                if(!flag) ans++;
            }
            else i++;
        }
        
    }
};
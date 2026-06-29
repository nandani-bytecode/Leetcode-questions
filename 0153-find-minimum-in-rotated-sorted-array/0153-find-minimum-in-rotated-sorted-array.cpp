class Solution {
public:
    int findMin(vector<int>& nums) {
      if(nums.size() == 1) return nums[0]; //kyuki minimum element ka index return kerna h
    int lo = 0 ,hi = nums.size()-1;
    if(nums[lo]<nums[hi]) return nums[lo]; // sorted array condition
    
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(nums[mid] > nums[mid + 1]) return nums[mid+1]; //check notes
        if(nums[mid] < nums[mid - 1]) return nums[mid];   //check notes
        if(nums[mid] > nums[lo]) {  //basic condition of rotated sorted array
             lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return -1;  
    }
};
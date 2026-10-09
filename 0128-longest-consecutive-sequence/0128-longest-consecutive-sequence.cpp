// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int max = 0;
//         for(int i=0;i<nums.size();i++){
//             if(max<nums[i]) max = nums[i];
//         }
//         vector<int> freq(max,0);
//         int j=0;
//         for(int i=0;i<nums.size();i++){
//             freq[nums[i]]++;
//         }
//         int count = 0;
//         int length = 0;
//         for(int i=0 ;i<max;i++){
//            if(freq[i] >0){
//             count++;
//             if(length <count) length = count;
//            }
//            else count = 0;
//         }
//         return length;
        
//     }
// };


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());// isse nums k sare elements set s m copy ho jayege ,nums.end() isnt behaving as key and since set h to duplicates s m nhi jayege 
        int longest = 0;

        for (int num : s) {
            // only start counting if it's the beginning of a sequence
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    currentStreak++;
                }

                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};

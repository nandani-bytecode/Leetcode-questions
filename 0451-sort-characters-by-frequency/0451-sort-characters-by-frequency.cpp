// class Solution {
// public:
//     string frequencySort(string s) {
//         int max = 1;
//         unordered_map<char,int> mapp;
//         for(int i=0;i<s.size();i++){
//             mapp[s[i]]++;
//         }
//         for(auto it : mapp){
//             if(it.second>max) max = it.second;
//         }
//         while(max--){
            
//         }
//     }
// };
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        //custom comparator function
        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) 
                return a < b; //compares ascii value and return true/false ,if true they get into sorted order
            return freq[a] > freq[b];
        });

        return s;
    }
};


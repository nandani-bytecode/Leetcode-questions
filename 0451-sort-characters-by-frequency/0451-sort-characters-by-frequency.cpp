class Solution {
public:
    string frequencySort(string s) {
        // Count frequency of each character
        unordered_map<char,int> freq;
        for(char c : s) freq[c]++;

        // Put into a vector of pairs (char, frequency)
        vector<pair<char,int>> arr(freq.begin(), freq.end());

        // Sort by frequency descending
        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        // Build result string
        string result;
        for(auto &p : arr){
            result.append(p.second, p.first); // repeat char p.second times
        }
        return result;
    }
};

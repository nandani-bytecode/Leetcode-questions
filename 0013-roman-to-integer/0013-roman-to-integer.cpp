class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        int curr = value[s[i]];//******
        if (i + 1 < s.size() && curr < value[s[i + 1]]) {
            result -= curr; // subtract if smaller before larger
        } else {
            result += curr; // otherwise add
        }
    }
    return result;
    }
};
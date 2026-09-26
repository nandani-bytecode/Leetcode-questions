class Solution {
public:
    bool isPalindrome(string s) {
        // Step 1: preprocess string (remove non-alphanumeric, lowercase)
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned.push_back(tolower(c));
            }
        }
        // Step 2: check palindrome recursively
        return helper(cleaned, 0, cleaned.size() - 1);
    }

private:
    bool helper(const string& s, int left, int right) {
        // Base case
        if (left >= right) return true;

        // If mismatch found
        if (s[left] != s[right]) return false;

        // Recursive step
        return helper(s, left + 1, right - 1);
    }
};

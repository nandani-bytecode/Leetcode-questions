class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;   // negatives are not palindromes

        int original = x;
        long rev = 0;              // use long to avoid overflow temporarily

        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev == original;
    }
};

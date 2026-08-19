class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int d=x;
        while (d != 0) {
            int digit = d % 10;   // extract last digit
            d /= 10;              // remove last digit

            // Check for overflow before multiplying by 10
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return false;
            if(x < 0) return false;

            rev = rev * 10 + digit;
        }
        if(rev == x)return true;
        else return false;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int balance=0;
        int max = 0;
        for(char c : s){
            if(c == '('){
                balance++;
            }
            else if(c == ')'){
                if(balance>max) max = balance;
                balance--;
            }
        }
        return max;
    }
};
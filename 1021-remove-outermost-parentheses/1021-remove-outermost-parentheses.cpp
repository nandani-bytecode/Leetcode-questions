class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        string temp = "";
        int balance = 0;
        for(char c : s){
            if(c == '('){
                if(balance > 0) temp += c;
                balance++;
            }
            else{
                balance--;
                if(balance > 0) temp += c;
                 
            }
            if (balance == 0) {
            result += temp;
            temp = "";
            }
        }
        return result;
    }
};
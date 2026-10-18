class Solution {
    bool isValid(string s){
        int balance =0;
        for(char c:s){
            if(c == '(') balance++;
            else balance--;
            if(balance <0) return false;
        }
        return balance == 0;
    }
    void generateAll(string curr, int n , vector<string>& result){

        if( curr.size() == 2*n){
            if(isValid(curr)) result.push_back(curr);
            return;
        }
        generateAll(curr+'(' , n , result);
        generateAll(curr+')' , n , result);
        
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateAll("" , n , result);
        return result;
    }
};
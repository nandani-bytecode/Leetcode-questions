class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        string prefix1 = strs[0];
        string prefix2 = strs[strs.size()-1];
        int count = 0;
        int i=0;
            while(prefix1[i] == prefix2[i] && i < min(prefix1.size(),prefix2.size()) ){
                count++;
                i++;
            }
            if(count == 0){
                return "";
            }
        
        return prefix1.substr(0, count);
        
    }
};
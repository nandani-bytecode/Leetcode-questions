class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // if (s.size() != t.size()) return false;
        
        // // Maps for character mapping
        // int mapS[256] = {0};
        // int mapT[256] = {0};
        
        // for (int i = 0; i < s.size(); i++) {
        //     char c1 = s[i];
        //     char c2 = t[i];
            
        //     // If mapping already exists, check consistency
        //     if (mapS[c1] != mapT[c2]) return false;
            
        //     // Store mapping (use i+1 to avoid default 0 conflict)
        //     mapS[c1] = i + 1;
        //     mapT[c2] = i + 1;
        // }

        unordered_map<char,char> mappST;
        unordered_map<char,char> mappTS;
        if (s.size() != t.size()) return false;
        for(int i=0;i<s.size();i++){
            char c1 = s[i];
            char c2 = t[i];

            if(mappST.count(c1)){
                if(mappST[c1] != c2) return false;
            }
            else{
                mappST[c1] = c2;
            }

            if(mappTS.count(c2)){
                if(mappTS[c2] != c1) return false;
            }
            else{
                mappTS[c2] = c1;
            }
        }
        return true;
    }
};

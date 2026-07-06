class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        
        // Maps for character mapping
        int mapS[256] = {0};
        int mapT[256] = {0};
        
        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];
            
            // If mapping already exists, check consistency
            if (mapS[c1] != mapT[c2]) return false;
            
            // Store mapping (use i+1 to avoid default 0 conflict)
            mapS[c1] = i + 1;
            mapT[c2] = i + 1;
        }
        
        return true;
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        int ans = 1;
        
        while(ans<=numRows){
            long long n = 1;
            vector<int> vt;
            for(int i=0;i<ans;i++){
                    vt.push_back(n);
                    n = n*(ans-1-i);
                    n = n/(i+1);  
            }
            
            
            ans++;
            res.push_back(vt);
        }
        return res;
        
    }
};
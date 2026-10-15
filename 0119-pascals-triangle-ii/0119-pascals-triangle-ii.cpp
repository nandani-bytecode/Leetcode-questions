class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
        vector<int> vt;
        for(int i=0;i<=rowIndex;i++){
            vt.push_back(ans);
            ans = ans*(rowIndex-i);
            ans = ans/(i+1);
            
        }
        return vt;
    }
};
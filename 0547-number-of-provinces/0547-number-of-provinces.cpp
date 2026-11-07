class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected[0].size() , 0);
        int components = 0;
        int current;
        stack<int> st;
            st.push(0);
            visited[0] = true;
        while(!st.empty()){
             current = st.top();
             visited[current] = true;
             st.pop();
             for(int i=0 ; i<isConnected[0].size() ; i++){
                
                if(isConnected[current][i] == 1 && visited[i] == false){
                    st.push(i);
                }
                
             }
             if(st.empty()) {
                components++;
                for(int j=0;j<isConnected[0].size();j++){
                    if(visited[j] == false){
                        st.push(j);
                        break;
                    }
                }
             }
        }

        return components;  
    }
};
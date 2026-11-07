class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>> visited(
            rows,
            vector<bool>(cols, false)
        );

        int islands = 0;

        vector<pair<int,int>> dir = {
            {1,0}, {-1,0}, {0,1}, {0,-1}
        };

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(grid[i][j] == '1' && !visited[i][j]) {

                    islands++;

                    stack<pair<int,int>> st;
                    st.push({i,j});
                    visited[i][j] = true;

                    while(!st.empty()) {

                        auto [r,c] = st.top();
                        st.pop();

                        for(auto d : dir) {

                            int nr = r + d.first;
                            int nc = c + d.second;

                            if(nr >= 0 && nr < rows &&
                               nc >= 0 && nc < cols &&
                               grid[nr][nc] == '1' &&
                               !visited[nr][nc]) {

                                visited[nr][nc] = true;
                                st.push({nr,nc});
                            }
                        }
                    }
                }
            }
        }

        return islands;
    }
};
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // there's m x n grid.
        int m = grid.size();
        int n = grid[0].size();
        
        int visited[300][300] = {0, };
        int isIsland = 0;
        
        // BFS
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == false && grid[i][j] == '1') {
                    int startX = i, startY = j;
                    queue<pair<int, int>> q;
                    q.push(make_pair(startX, startY));
                    visited[startX][startY] = true;
                    
                    while(!q.empty()) {
                        // (x, y) 4 dimension : (x, y-1), (x, y+1), (x-1, y), (x+1, y)
                        pair<int, int> p = q.front();
                        q.pop();

                        if ((p.second - 1) >= 0) {
                            if (visited[p.first][p.second-1] == false && grid[p.first][p.second-1] == '1') {
                                visited[p.first][p.second-1] = true;
                                q.push(make_pair(p.first, p.second-1));
                            }
                        }

                        if ((p.second + 1) < n) {
                            if (visited[p.first][p.second+1] == false && grid[p.first][p.second+1] == '1') {
                                visited[p.first][p.second+1] = true;
                                q.push(make_pair(p.first, p.second+1));
                            }
                        }

                        if ((p.first - 1) >= 0) {
                            if (visited[p.first-1][p.second] == false && grid[p.first-1][p.second] == '1') {
                                visited[p.first-1][p.second] = true;
                                q.push(make_pair(p.first-1, p.second));
                            }
                        }

                        if ((p.first + 1) < m) {
                            if (visited[p.first+1][p.second] == false && grid[p.first+1][p.second] == '1') {
                                visited[p.first+1][p.second] = true;
                                q.push(make_pair(p.first+1, p.second));
                            }
                        }
                    }
                    isIsland++;
                }
            }
        }

        return isIsland;
        

        isIsland++;
        
    }
};
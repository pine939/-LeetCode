class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> tmp(r, vector<int>(c, 0));
        vector<int> tmp2;
        //printf("%d\n", mat[0].size());
        //printf("%d\n", mat.size());
        
        int m = mat.size();  // 열 개수
        int n = mat[0].size();  // 행 개수
        
        if (m*n != r*c) return mat;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                tmp2.push_back(mat[i][j]);
            }
        }
        
        //printf("%d, %d\n", r, c);  // new 행, 열
        
        int k = 0;
        for (int i = 0; i < r; i++) {  // 1
            for (int j = 0; j < c; j++) {  // 6
                tmp[i][j] = tmp2[k];
                k++;
            }
        }
        return tmp;
    }
};
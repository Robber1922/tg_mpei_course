//https://leetcode.com/problems/number-of-islands/

class Solution {
public:
    int count(vector<vector<char>>& grid, int i, int j) {
        if (i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]=='1'){
            grid[i][j] = '0';
            count(grid,i-1,j);
            count(grid,i+1,j);
            count(grid,i,j-1);
            count(grid,i,j+1);
        }
        return 0;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0) 
            return 0;
        int n=grid.size(), m=grid[0].size();
        int res=0;
        for (int i=0;i<n;i++) 
            for (int j=0;j<m;j++)
                if (grid[i][j] == '1'){
                    count(grid, i, j);
                    res++;
        }
        return res;
    }
    
};

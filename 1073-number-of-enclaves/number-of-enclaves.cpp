class Solution {
public:

    void dfs(vector<vector<int>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return;
        
        grid[i][j] = 0;  // Sink land to sea
        
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }


    int numEnclaves(vector<vector<int>>& grid) {
int m = grid.size();
int n = grid[0].size();

// step 1 flood fill from the boundary 
for(int i =0;i<m;i++){
    dfs(grid,i,0);
    dfs(grid,i,n-1);
}

for(int i =0;i<n;i++){
    dfs(grid,0,i);
    dfs(grid,m-1,i);
}
// count remaiing land (enclaves )
int count =0 ;
for(int i =0;i<m;i++){
    for(int j =0;j<n;j++){
        if(grid[i][j]==1){
            count++;
        }
    }
}
    return count;

    }
};
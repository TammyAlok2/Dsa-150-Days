//link:https://practice.geeksforgeeks.org/problems/number-of-enclaves/1
 int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
             int n=grid.size();
        int m=grid[0].size();
        int h[]={-1,0,0,1};
        int v[]{0,-1,1,0};
        queue<pair<int,int>>q;
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        for(int i=0;i<n;i++)
        {
            if(grid[i][0])
            {
                q.push({i,0});
                visited[i][0]=true;
            }
            if(grid[i][m-1])
            {
                q.push({i,m-1});
                visited[i][m-1]=true;
            }
        }
        for(int i=1;i<m-1;i++)
        {
            if(grid[0][i])
            {
                q.push({0,i});
                visited[0][i]=true;
            }
            if(grid[n-1][i])
            {
                q.push({n-1,i});
                visited[n-1][i]=true;
            }
        }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            grid[x][y]=0;
            for(int k=0;k<4;k++)
            {
                int a=x+h[k];
                int b=y+v[k];
                if(a<0 || a>=n ||b<0 || b>=m || grid[a][b]==0 || visited[a][b])
                {
                    continue;
                }
                q.push({a,b});
                visited[a][b]=true;
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    count++;
                }
            }
        }
        return count;
    
    }

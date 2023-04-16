void dfs(int row,int col,vector<vector<int>>&board,vector<vector<int>>&vis)
    {
           int n = board.size();
        int m = board[0].size();
        
        vis[row][col]=1;
        
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        
        for(int i=0; i<4; i++)
        {
            int nrow = row+dx[i];
            int ncol = dy[i]+col;
            
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and !vis[nrow][ncol] and board[nrow][ncol]==0)
            {
                dfs(nrow,ncol,board,vis);
            }
        }
    }
    
    int closedIsland(vector<vector<int>>& board) {
        
         int n = board.size();
        int m = board[0].size();
        
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0; i<m; i++)
        {
            /// first row visited
            if(!vis[0][i] and board[0][i]==0)
            {
                dfs(0,i,board,vis);
            }
            
            /// last row
            
            if(!vis[n-1][i] and board[n-1][i]==0)
            {
                dfs(n-1,i,board,vis);
            }
                
        }
        
        /// first and lasr col
        
        for(int i=0; i<n; i++)
        {
            if(!vis[i][0] and board[i][0]==0)
            {
                dfs(i,0,board,vis);
            }
            
            if(!vis[i][m-1] and board[i][m-1]==0)
            {
                dfs(i,m-1,board,vis);
            }
        
        }
        
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==0 and !vis[i][j])
                {
                    cnt++;
                    dfs(i,j,board,vis);
                }
            }
        }
        
        return cnt;
        
        
        
        
    }
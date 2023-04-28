int minimumCostPath(vector<vector<int>>& grid) 
    {
       int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> distance(n, vector<int>(m, 1e9));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        distance[0][0] = grid[0][0];
        q.push({grid[0][0], {0, 0}});
        
        while(!q.empty()){
            int dist = q.top().first;
            int row = q.top().second.first;
            int col = q.top().second.second;
            q.pop();
            
            int dr[] = {-1, 0, 1, 0};
            int dc[] = {0, 1, 0, -1};
            
            for(int i=0; i<4; i++){
                int nrow = row+dr[i];
                int ncol = col+dc[i];
                
                if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
                    if(dist+grid[nrow][ncol] < distance[nrow][ncol]){
                        distance[nrow][ncol] = dist+grid[nrow][ncol];
                        q.push({distance[nrow][ncol], {nrow, ncol}});
                    }
                }
            }
        }
        
        return distance[n-1][m-1];
    }
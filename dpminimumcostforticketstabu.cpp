int mincostTickets(vector<int>& days, vector<int>& costs) {
        return solve(days,costs);
    }
    int solve(vector<int>&days,vector<int>&costs)
    {
        int n =days.size();
        vector<int>dp(n+1,INT_MAX);
        dp[n]=0;
        for(int k=n-1;k>=0;k--)
        {
            int o1=costs[0]+dp[k+1];
            int i;
            for(i=k;i<n&&days[i]<days[k]+7;i++);
            int o2=costs[1]+dp[i];
            for(i=k;i<n&&days[i]<days[k]+30;i++);
            int o3=costs[2]+dp[i];
            dp[k]=min(o1,min(o2,o3));
            
        }
        return dp[0];
    }
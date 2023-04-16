int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return solve(0,piles,k,n,dp);
    }
    int solve(int i,vector<vector<int>>&piles,int k, int n, vector<vector<int>>&dp)
    {
        if(i>=n||k<=0) return 0;
        if(dp[i][k]!=-1) return dp[i][k];

        int res=solve(i+1,piles,k,n,dp);
        int curr=0;
        for(int j=0;j<piles[i].size() && j<k;++j)
        {
            curr+=piles[i][j];
            res=max(res,solve(i+1,piles,k-j-1,n,dp)+curr);
        }
        dp[i][k]=res;
        return res;
    }
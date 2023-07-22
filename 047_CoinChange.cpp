//gfg Dp SOLUTION
int count(int coins[],int M,int sum,vector<int>&dp){
        if(sum == 0){
            return 0;
        }
        if(sum<0){
            return INT_MAX;
        }
        if(dp[sum]!=-1){
            return dp[sum];
        }
        int mini = INT_MAX;
        for(int i=0;i<M;i++)
        {
            int ans = count(coins,M,sum-coins[i],dp);
            if(ans!=INT_MAX)
            {
                mini = min(mini,1+ans);
            }
        }
        dp[sum] = mini;
        return dp[sum];
        
    }
    int minCoins(int coins[], int M, int V) 
    { 
        vector<int>dp(V+1,-1);
        int ans = count(coins,M,V,dp);
        if(ans == INT_MAX){
           return -1;
        }
        else{
            return ans;
        }
    } 

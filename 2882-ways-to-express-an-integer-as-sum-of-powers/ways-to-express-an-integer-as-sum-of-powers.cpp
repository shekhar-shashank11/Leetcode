class Solution {
public:
    int mod=1e9+7;
    int ans(int i,int n,int x,vector<vector<int>> &dp){
        if(n==0) return 1;
        if(n<0) return 0;
        if(pow(i,x)>n) return 0;
        if(dp[n][i]!=-1) return dp[n][i];
        int r=pow(i,x);
        int take=ans(i+1,n-r,x,dp);
        int nottake=ans(i+1,n,x,dp);
        return dp[n][i]=(take +nottake)%mod;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return ans(1,n,x,dp);
    }
};
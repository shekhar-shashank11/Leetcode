class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> dp;
        for(int i=0;i<n;i++)
        {
            vector<int>ds;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || i==j) ds.push_back(1);
                else{
                    ds.push_back(dp[i-1][j-1]+dp[i-1][j]);
                }
            }
            dp.push_back(ds);
        }
        return dp;
        
    }
};
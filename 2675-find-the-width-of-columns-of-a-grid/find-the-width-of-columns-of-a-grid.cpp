class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a=grid[j][i];
                int len=0;
                if(a<=0) len=1;
                while(a){
                    a/=10;
                    ++len;
                }
                ans[i]=max(ans[i],len);

            }
        }
        return ans;
    }
};
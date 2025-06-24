class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<int>ans;
        long long a=1;
        ans.push_back(a);
        for(int i=1;i<n;i++ )
        {
            a=a*(n-i);
            a=a/i;
            ans.push_back(a);
        }
        return ans;        
    }
};
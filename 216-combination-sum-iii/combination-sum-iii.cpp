class Solution {
public:
    void func(vector<int>& v,int k,int n,int i,int sum,vector<vector<int>>& ans){
        
        if(v.size()==k){
            if(n==sum)ans.push_back(v);
            return;
        }


        for(int j=i;j<=9;j++){
            v.push_back(j);
            func(v,k,n,j+1,sum+j,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        if(n<=k)return ans;
        vector<int> v;
        func(v,k,n,1,0,ans);
        return ans;
        
    }
};
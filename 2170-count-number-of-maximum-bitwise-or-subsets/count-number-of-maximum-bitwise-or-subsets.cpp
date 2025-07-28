class Solution {
public:

    int solve(int i,vector<int>& nums,int m,int ans){
        if(i>=nums.size()){
            return ans==m ? 1:0;
        }
        int t=solve(i+1,nums,m,ans | nums[i]);
        int nt=solve(i+1,nums,m,ans);
        return t+nt;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int n:nums){
            maxor=maxor | n;
        }

        return solve(0,nums,maxor,0);
    }
};
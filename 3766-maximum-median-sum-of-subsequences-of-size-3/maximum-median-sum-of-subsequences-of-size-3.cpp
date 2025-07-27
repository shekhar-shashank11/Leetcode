class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long  n=nums.size();
        long long  ans=0;
        for(long long  i=n-2;i>=n/3;i -=2){
            ans +=nums[i];
        }
        return ans;
        
        
    }
};
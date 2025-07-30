class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=1;
        int ans=0;
        int m=*max_element(nums.begin(),nums.end());
        for(auto it:nums){
            if(it==m){

                ans=ans=max(ans,count++);

            }
            else  {
                count=1;
            }
            
        }
        return ans;
        
        
    }
};
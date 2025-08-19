class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int count=0;
        for(long long i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                ans +=count;
            }
            else{
                count=0;
            }
 
        }
        return ans;
        
    }
};
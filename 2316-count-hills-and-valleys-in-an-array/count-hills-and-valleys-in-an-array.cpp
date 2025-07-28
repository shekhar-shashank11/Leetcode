class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int h=0;
        int v=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
            if((nums[i]>nums[v]) && (nums[i]>nums[i+1]) || ((nums[i]<nums[v]) && (nums[i]<nums[i+1]) && nums[i])){
                h++;
            }
            v=i;
            }

        }
        return h;
        
    }
};
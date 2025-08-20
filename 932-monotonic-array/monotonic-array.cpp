class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count=0;
        int count2=0;
        for(int i=0;i<nums.size()-1;i++){

            if(nums[i]<nums[i+1]){
            if(count2==1) {
                return false;
            }
                count=1;
            }
            else if(nums[i]>nums[i+1]){
                if(count==1){
                    return false;
                }
                count2=1;
            }
        }
        return true;
    }
};
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int e=nums[0]%2==0;
        int o=nums[0]%2==1;
        int al=1;
        bool nexteven=false;
        if(o==1) nexteven=true;
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]%2==0 && nexteven==true)||(nums[i]%2==1 && nexteven==false)) {
                al++;
                nexteven =!nexteven;
            }
            if(nums[i]%2==0) e++;
            else o++;

            
        }
        return max(o,max(e,al));


    }
};
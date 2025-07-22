class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int>st;
        int l=0;
        int res=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            while(st.count(nums[i])){
                st.erase(nums[l]);
                sum -=nums[l];
                l++;
            }

            sum +=nums[i];
            st.insert(nums[i]);
          
            res=max(res,sum);
        }
        return res;

        
    }
};
class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) st.insert(nums[i]);
        }
        if(!st.empty()){
            for(int a:st){
            ans=ans+a;
        }
         return ans;
        }

        for(int i=0;i<nums.size();i++){
          st.insert(nums[i]);
          if(nums[i]==0) return 0;
        }
        int ans1=-1e9;

        for(int a:st){
            ans1=max(ans1,a);
        }
        return ans1;

       
    }
};
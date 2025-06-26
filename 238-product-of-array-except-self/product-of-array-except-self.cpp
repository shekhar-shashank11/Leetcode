class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int n=nums.size();
        int flag=0,flag1=0;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                flag++;
            }
            else{
                prod=prod*nums[i];
                flag1=1;
            }

        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0 && flag==1)
            {
                ans[i]=0;
            }
            else if(flag>1)
            {
                ans[i]=0;
            }
            else{
                if(nums[i]==0 && flag1==1){
                    ans[i]=prod;
                }
                else if(nums[i]==0 && flag1==0)
                {
                    ans[i]=0;
                }
                else{
                int a=prod/nums[i];
                ans[i]=a;
                }
            }
        }
        return ans;
        
        
    }
};
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
      
        int i=0;
        int n=nums.size();
        if(n<=3) return false;
        while(i<n-1 && nums[i]<nums[i+1]) i++;
        if(i==0 || i==n) return false;

        int j=i;
        while(i<n-1 && nums[i]>nums[i+1]) i++;
        if(i==j || j==n) return false;
        int m=i;
        while(i<n-1 && nums[i]<nums[i+1]) i++;
        if(i==m) return false;

        return i==n-1;



    }
};
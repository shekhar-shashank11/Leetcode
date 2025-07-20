class Solution {
public:
    long long  isprime(long long  n)
    {
        if(n==0 || n==1) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long  n=nums.size();
        long long  a=0;
        long long  b=0;
        for(long long  i=0;i<n;i++)
        {
            if(isprime(i)) a=a+nums[i];
            else b=b+nums[i];
        }

        return abs(a-b);
        
    }
};
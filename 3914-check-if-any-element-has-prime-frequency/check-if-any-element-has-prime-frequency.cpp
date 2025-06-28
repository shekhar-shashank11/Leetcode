class Solution {
public:
    bool prime(int n)
    {
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i +=6)
        {
            if(n%i==0 || n%(i+2)==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(prime(it.second)){
                return true;
            }
        }
        return false;
        
        
    }
};
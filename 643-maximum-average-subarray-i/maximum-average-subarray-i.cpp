class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s=0;
        int n=nums.size();

        for(int i=0;i<k;i++){
            s=s+nums[i];

        }
        double maxi=s;
        for(int i=k;i<n;i++){
            s=s+nums[i]-nums[i-k];
            maxi=max(maxi,s);
        }
        return maxi /k;
        
    }
};
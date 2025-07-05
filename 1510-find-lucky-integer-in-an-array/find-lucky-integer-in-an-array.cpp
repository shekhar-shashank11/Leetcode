class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=-1;
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;

        }
        for( auto x:mp){
            if(x.first==x.second){
                maxi=max(x.first,maxi);
            }
        }
        return maxi;

        
    }
};
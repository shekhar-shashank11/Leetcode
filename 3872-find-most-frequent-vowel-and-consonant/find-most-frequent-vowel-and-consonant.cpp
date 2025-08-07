class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mpp;
        for(auto i:s){
            mpp[i]++;
        }
        int max1=0;
        int max2=0;
        while(!mpp.empty()){
            auto a=mpp.begin();
            if(a->first=='a' || a->first=='e' || a->first=='i' || a->first=='o' || a->first=='u'){
                max1=max(max1,a->second);
            }
            else {
                max2=max(max2,a->second);
            }
            mpp.erase(a);
        }

        return max1+max2;
        
    }
};
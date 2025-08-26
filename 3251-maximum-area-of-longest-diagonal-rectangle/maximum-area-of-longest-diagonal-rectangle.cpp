class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimension) {
        double maxi=-1.0;
        int ans=0;
        for(int i=0;i<dimension.size();i++){
            int n=(dimension[i][0]*dimension[i][0]) + (dimension[i][1]*dimension[i][1]);
            double d=sqrt(n*1.0);


            if(d>maxi){
                int a=dimension[i][0]*dimension[i][1];
                maxi=d;
                ans=a;
            }
           else if(d==maxi){
                int a=dimension[i][0]*dimension[i][1];
                ans=max(ans,a);
            }
        }
        return ans;
        
    }
};
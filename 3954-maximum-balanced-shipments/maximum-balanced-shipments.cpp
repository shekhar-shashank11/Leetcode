class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int maxi=weight[0];
        int count=0;

        for(int i=1;i<weight.size();i++){
            maxi=max(maxi,weight[i]);
            if(weight[i]<maxi){
                count++;
                maxi=0;
            }
        }
        return count;
    }
};
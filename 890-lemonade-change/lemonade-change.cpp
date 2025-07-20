class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if (bills[0]>5) return false;
        int a5=0,b10=0,c20=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5) a5++;
            else if(bills[i]==10) {
                if(a5==0) return false;
                a5--;

                b10++;
            }
            else{
                c20++;
                if(b10>=1 && a5>=1){
                    b10--;
                    a5--;
                }
                else if(a5>=3) {
                    a5=a5-3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
        
    }
};
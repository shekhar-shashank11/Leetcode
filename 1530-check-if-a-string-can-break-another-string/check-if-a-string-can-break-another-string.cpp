class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        bool a=true;
        bool b=true;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]>s2[i]){
                a=false;
            }
            if(s1[i]<s2[i]){
                b=false;
            }
        }

        return a || b;


        
    }
};
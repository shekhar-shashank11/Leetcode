class Solution {
public:
    string toLowerCase(string s) {
        //transform (s.begin(),s.end(),s.begin(),::tolower);
        //return s;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        }
        return s;
    }
};
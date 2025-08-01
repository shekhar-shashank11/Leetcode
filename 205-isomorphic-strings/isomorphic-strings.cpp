class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            char d=t[i];
            if((mp1.find(c)!=mp1.end() && mp1[c]!=d )||( mp2.find(d)!=mp2.end() && mp2[d]!=c ) ) return false;
            mp1[c]=d;
            mp2[d]=c;
        }
        return true;
    }
};
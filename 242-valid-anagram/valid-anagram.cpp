class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        if (s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto it:mpp){
            if(it.second<0) return false;
        }
        return true;

        
    }
};
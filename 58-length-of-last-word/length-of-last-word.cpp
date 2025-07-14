class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int ans=0;
        while(s[i]==' ') i--;
        while(i>=0){
            if(s[i]==' ') return ans;
            ans++;
            i--;
        }
        return ans;
        
    }
};
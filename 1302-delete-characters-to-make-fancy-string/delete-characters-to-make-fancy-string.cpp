class Solution {
public:
    string makeFancyString(string s) {

        int count=1;
        int n=s.length();
        if(n<=2) return s;
        string ans="";
        ans += s[0];

        for (int i = 1; i <n; i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                ans += s[i];
            }
        }
        return ans;
                   
    }
};
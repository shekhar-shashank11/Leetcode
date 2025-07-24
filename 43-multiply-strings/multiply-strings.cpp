class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.length();
        int m=num2.length();
        vector<int>ans (n+m,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int s=mul+ans[i+j+1];
                ans[i+j+1]=s%10;
                ans[i+j] +=s/10;

            }
        }
        string res="";
        for(int a:ans){
            if (!(res.empty() && a == 0))  
                res += to_string(a);
        }

        return res.empty()? "0" :res;

        
    }
};
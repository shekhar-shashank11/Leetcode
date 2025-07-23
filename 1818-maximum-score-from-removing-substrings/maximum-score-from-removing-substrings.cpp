class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res=0;
        stack<char>st;
        for(char & ch:s){
            if(!st.empty() && x>=y && st.top()=='a' && ch=='b') {
                st.pop();
                res +=x;
            }
            else if(!st.empty() && y>=x && st.top()=='b' && ch=='a') {
                st.pop();
                res +=y;
            }
            else{
                st.push(ch);
            }
        }
        s="";
       while(!st.empty()){
        s.push_back(st.top());
        st.pop();
       }
       reverse (begin(s),end(s));
        for(char & ch:s){
            if(!st.empty() && st.top()=='a' && ch=='b') {
                st.pop();
                res +=x;
            }
            else if(!st.empty()  && st.top()=='b' && ch=='a') {
                st.pop();
                res +=y;
            }
            else{
                st.push(ch);
            }
        }

        return res;

         
    }
};
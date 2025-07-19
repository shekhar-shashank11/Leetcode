class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>ans;
        for(string& i :op)
        {
            if(i =="C") ans.pop_back();
            else if(i =="D") {
                ans.push_back(ans.back()*2);
            }
            else if(i =="+"){
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else{
                ans.push_back(stoi(i));
            }
        }

        int m=ans.size();
        int b=0;
        for(int i=0;i<m;i++ )
        {
            b=b+ans[i];
        } 
        return b;       
    }
};
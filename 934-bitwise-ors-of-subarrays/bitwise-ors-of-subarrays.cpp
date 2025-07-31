class Solution {
public:

    int subarrayBitwiseORs(vector<int>& arr) {
        set<int>s;
        set<int>ans;
        for(int num :arr){
            set<int> temp;
            temp.insert(num);
            for(int x: s){
                temp.insert(x |num);
            }
            s=temp;
            ans.insert(s.begin(),s.end());
        }
        return ans.size();
    }
};
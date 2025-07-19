class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int a=0;
        int b=0;

        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U'){
                a++;
            }
            else if(moves[i]=='D') a--;
            else if(moves[i]=='L') b++;
            else b--;
            
        }
        return a==b && a==0;    
    }
};
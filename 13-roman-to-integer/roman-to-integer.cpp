class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int n=s.length();
        int i=n-1;
        while(i>=0)
        {
            if( i>0 && s[i]=='V' && s[i-1]=='I') {
                sum=sum+4;
                i=i-2;
            }
            else if( i>0 && s[i]=='X' && s[i-1]=='I') {
                sum=sum+9;
                i=i-2;
            }
            else if(i>0 && s[i]=='L' && s[i-1]=='X') {
                sum=sum+40;
                i=i-2;
            }
            else if(i>0 && s[i]=='C' && s[i-1]=='X') {
                sum=sum+90;
                i=i-2;
            }
            else if(i>0 && s[i]=='D' && s[i-1]=='C') {
                sum=sum+400;
                i=i-2;
            }
            else if(i>0 && s[i]=='M' && s[i-1]=='C') {
                sum=sum+900;
                i=i-2;
            }
            else{
                if(s[i]=='I') sum +=1;
                else if (s[i]=='V') sum +=5;
                else if (s[i]=='X') sum +=10;
                else if (s[i]=='L') sum +=50;
                else if (s[i]=='C') sum +=100;
                else if (s[i]=='D') sum +=500;
                else if (s[i]=='M') sum +=1000;
                i--;
            }          
        }
        return sum;
        
    }
};
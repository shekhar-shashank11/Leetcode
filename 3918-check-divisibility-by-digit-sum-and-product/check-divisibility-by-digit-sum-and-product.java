class Solution {
    public boolean checkDivisibility(int n) {
        int a=0;
        int b=1;
        int g=n;
        while(n>0){
            int c=n%10;
            a=a+c;
            b=b*c;
            n=n/10;

        }
        int ans=a+b;
        return g%ans==0;
        
    }
}
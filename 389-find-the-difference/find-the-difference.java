class Solution {
    public char findTheDifference(String s, String t) {
        char temp1[]=s.toCharArray();
        char temp2[]=t.toCharArray();
        Arrays.sort(temp1);
        Arrays.sort(temp2);
        for(int i=0,j=0;i<temp1.length;i++,j++)
        {
            if(temp1[i]!=temp2[j])
            {
                return temp2[j];
                
            }
        }
        return temp2[temp2.length-1];
    }
}
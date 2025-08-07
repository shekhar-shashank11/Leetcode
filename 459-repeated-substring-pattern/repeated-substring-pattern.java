class Solution {
    public boolean repeatedSubstringPattern(String s) {
        String a=s+s;
        String m= a.substring(1,a.length()-1);
        return m.contains(s);
        
    }
}
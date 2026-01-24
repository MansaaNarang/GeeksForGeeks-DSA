class Solution {
    public boolean areIsomorphic(String s1, String s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        // Your code here
        int str1[]=new int [256];
        int str2[]=new int [256];
        Arrays.fill(str1,-1);
        Arrays.fill(str2,-1);
        
        for(int i=0;i<s1.length();i++){
            char ss=s1.charAt(i);
            char tt=s2.charAt(i);
            
            if(str1[ss]==-1 && str2[tt]==-1){
                str1[ss]=tt;
                str2[tt]=ss;
            }
            else if(str1[ss]!=tt || str2[tt]!=ss){
                return false;
            }
            
        }
        return true;
    }
}
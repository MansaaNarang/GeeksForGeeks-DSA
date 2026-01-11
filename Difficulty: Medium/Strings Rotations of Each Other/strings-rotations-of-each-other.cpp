class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        if(s1.size()!=s2.size()){
            return false;
        }
        if((s1+s1).find(s2)!=string::npos){
            return true;
        }
        return false;
    }
};
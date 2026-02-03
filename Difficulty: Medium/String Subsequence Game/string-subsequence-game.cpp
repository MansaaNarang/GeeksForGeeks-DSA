// User function Template for C++
class Solution {
  public:
  bool isVowel(char c){
      return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
      
  }
  void generate(int index,string &S,string current,set<string>&st){
      if(index==S.size()){
          if(!current.empty() && isVowel(current.front()) && 
          !isVowel(current.back())){
              st.insert(current);
          }
          return;
      }
      generate(index+1,S,current+S[index],st);
      generate(index+1,S,current,st);
  }
    set<string> allPossibleSubsequences(string S) {
        // code here
        set<string>st;
        string current="";
        generate(0,S,current,st);
        return st;
    }
};
class Solution {
  public:
  void rev(stack<int>&st,stack<int>s){
      if(st.empty()){
          swap(st,s);
          return;
      }
      s.push(st.top());
      st.pop();
      rev(st,s);
  }
    void reverseStack(stack<int> &st) {
        // code here
        stack<int>s;
        rev(st,s);
    }
};
class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int>arr;
        while(st.size()>0){
            arr.push_back(st.top());
            st.pop();
            
        }
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<arr.size()){
            st.push(arr[i]);
            i++;
        }
    }
};

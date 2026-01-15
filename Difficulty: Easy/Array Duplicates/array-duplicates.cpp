class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
         unordered_map<int, int>mpp;
        vector<int>store;
        for(auto it: arr){
            mpp[it]++;
            if(mpp[it] == 2){
                store.push_back(it);
            }
        }
        return store;
        
    }
};
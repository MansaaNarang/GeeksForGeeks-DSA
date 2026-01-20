class Solution {
  public:
  void solve(vector<int>&arr,int target,int i,vector<int>&temp,vector<vector<int>>&ans){
      if(target==0){
          ans.push_back(temp);
          return;
      }
      if(target<0)
      return;
      for(int j=i;j<arr.size();j++){
          temp.push_back(arr[j]);
          solve(arr,target-arr[j],j,temp,ans);
          temp.pop_back();
          
      }
  }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        solve(arr,target,0,temp,ans);
        return ans;
    }
};
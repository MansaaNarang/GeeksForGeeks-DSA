class Solution {
  public:
  int solve(vector<int>&arr,int k,int n,vector<vector<int>>&dp){
      if(k==0)
      return 1;
      if(k<0 || n<0)
      return 0;
      if(dp[n][k]!=-1)
      return dp[n][k];
      bool pick=0;
      if(k-arr[n]>=0){
          pick=solve(arr,k-arr[n],n-1,dp);
          
      }
      bool skip=solve(arr,k,n-1,dp);
      bool comp=pick||skip;
      if(comp)
      return dp[n][k]=1;
      return dp[n][k]=0;
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));
        solve(arr,sum,arr.size()-1,dp);
        return dp[arr.size()-1][sum];
        
    }
};
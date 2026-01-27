class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int currsum=0;
        int ans=INT_MIN;
        for(int num:arr){
            currsum+=num;
            ans=max(ans,currsum);
            if(currsum<0)
            currsum=0;
        }
        return ans;
    }
};
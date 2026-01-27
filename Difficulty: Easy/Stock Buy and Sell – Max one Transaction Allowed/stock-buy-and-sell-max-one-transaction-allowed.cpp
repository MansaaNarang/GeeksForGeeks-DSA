class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
         int maxprofit=0;
        int minprice=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
            minprice=min(minprice,prices[i]);
            int currprofit=prices[i]-minprice;
            maxprofit=max(maxprofit,currprofit);
        }
        return maxprofit;
    }
};

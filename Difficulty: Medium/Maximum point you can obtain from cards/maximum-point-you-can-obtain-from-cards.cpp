class Solution {
  public:
    int maxScore(vector<int>& cardPoints, int k) {
        // code here.
        int n=cardPoints.size();
        if(k==n){
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        }
        int totalsum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int windowsize=n-k;
        int currsum=0;
        int minwindowsum=INT_MAX;
        int left=0;
        for(int right=0;right<n;right++){
            currsum+=cardPoints[right];
            if(right-left+1>windowsize){
                currsum-=cardPoints[left];
                left++;
            }
            if(right-left+1==windowsize){
                minwindowsum=min(minwindowsum,currsum);
            }
        }
        return totalsum-minwindowsum;
    }
};

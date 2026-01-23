class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // code here
        sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        int i=0;
        int j=0;
        int cnt=0;
        while(i<greed.size() && j<cookie.size()){
            if(greed[i]<=cookie[j]){
                cnt++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return cnt;
    }
};
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int l=0;
        int h=arr.size()-1;
        int mid=0;
        int ans=arr.size();
        while(l<=h){
            mid=(l+h)/2;
            if(x<arr[mid]){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans-1;
    }
};

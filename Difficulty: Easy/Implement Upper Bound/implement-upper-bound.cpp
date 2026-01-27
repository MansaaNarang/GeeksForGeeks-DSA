class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int s=0;
        int e=arr.size()-1;
        int ans=arr.size();
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<=target){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans+1;
    }
};

class Solution {
    int maxSubarraySum(int[] arr) {
        // Code here
        int maxsum=arr[0];
        int currsum=arr[0];
        for(int i=1;i<arr.length;i++){
            currsum=Math.max(arr[i],currsum+arr[i]);
            maxsum=Math.max(maxsum,currsum);
        }
        return maxsum;
    }
}

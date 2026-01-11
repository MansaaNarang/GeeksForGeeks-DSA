class Solution {
    public int peakElement(int[] arr) {
        // code here
        int l=0;
        int h=arr.length-1;
        while(l<h){
            int m=(h+l)/2;
            if(arr[m]<arr[m+1]){
                l=m+1;
            }else{
                h=m;
            }
        }
        return l;
    }
}
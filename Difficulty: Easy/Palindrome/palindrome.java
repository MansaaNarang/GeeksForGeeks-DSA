class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int rev=0;
        int temp=n;
        while(n!=0){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        return rev==temp;
    }
}
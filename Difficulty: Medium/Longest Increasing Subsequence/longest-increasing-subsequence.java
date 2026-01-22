class Solution {
    static int lis(int arr[]) {
        // code here
       int n = arr.length;

        int[][] dp = new int[n + 1][n + 1];

        for (int ind = n - 1; ind >= 0; ind--) {
            for (int prev = ind - 1; prev >= -1; prev--) {

                int notTake = dp[ind + 1][prev + 1];
                int take = 0;

                if (prev == -1 || arr[ind] > arr[prev]) {
                    take = 1 + dp[ind + 1][ind + 1];
                }

                dp[ind][prev + 1] = Math.max(take, notTake);
            }
        }

        return dp[0][0];
    }
}
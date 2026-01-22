class Solution {
    static int[][] dp;
    public int paths(int m,int n){
        if(m==0 || n==0)
        return 0;
        if(m==1 || n==1)
        return 1;
        if(dp[m][n]!=-1)
        return dp[m][n];
        int rightways=paths(m,n-1);
        int downways=paths(m-1,n);
        return dp[m][n]=rightways+downways;
    }
    public int numberOfPaths(int m, int n) {
        // code here
        dp=new int[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=-1;
            }
        }
        return paths(m,n);
    }
}
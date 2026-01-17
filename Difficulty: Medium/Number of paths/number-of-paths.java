class Solution {
    static int[][] dp;
    public int paths(int m,int n){
        if(m==0 || n==0)
        return 0;
        if(m==1 || n==1)
        return 1;
        if(dp[m][n]!=-1)
        return dp[m][n];
        int rightWays=paths(m,n-1);
        int downWays=paths(m-1,n);
        return dp[m][n]=rightWays+downWays;
    }
    public int numberOfPaths(int m, int n) {
        // Code Here
        dp=new int[m+1][n+1];
        for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=-1;
        }
    }
    return paths(m,n);
    }
}
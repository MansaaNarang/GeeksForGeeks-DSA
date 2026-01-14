class Solution {
  public:
  static const long long MOD = 1000000007;
  long long power(long long x,long long y){
      if(y==0)
      return 1;
      long long ans=power(x,y/2);
      ans*=ans;
      if(y%2)
      ans*=x;
      ans%=MOD;
      return ans;
  }
    int countGoodNumbers(long long N) {
        // code here
        long long o=N/2;
        long long e=(N/2)+(N%2);
        return (power(5,e)*power(4,o))%MOD;
    }
};

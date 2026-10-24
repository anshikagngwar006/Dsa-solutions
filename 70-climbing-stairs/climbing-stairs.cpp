class Solution {
public:

int simple(int n,vector<int>&dp){
    if(n==1)return n;
        if(n==2) return n;
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]= simple(n-1,dp)+simple(n-2,dp);
}
    int climbStairs(int n) {
        vector<int> dp (n+1,-1);
         return simple(n,dp);
    }
};
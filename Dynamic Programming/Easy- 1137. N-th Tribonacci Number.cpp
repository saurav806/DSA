//Link:- https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int count(int n,vector<int>&dp){
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=count(n-1,dp)+count(n-2,dp)+count(n-3,dp);
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return count(n,dp);
    }
};

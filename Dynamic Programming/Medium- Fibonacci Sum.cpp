//Link:- https://practice.geeksforgeeks.org/problems/fibonacci-sum1423/1

class Solution{
public:
    long long int count(long long int n,vector<long long int>&dp){
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(dp[n]!=-1){
            return dp[n];
        }
        long long int sum=1;
        long long int ans=(count(n-1,dp)+count(n-2,dp))%1000000007;
        sum+=ans%1000000007;
        return dp[n]=sum%1000000007;
    }
    long long int fibSum(long long int N){
        //code here
        vector<long long int>dp(N+1,-1);
        return count(N,dp);
    }
};

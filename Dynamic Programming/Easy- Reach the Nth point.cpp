//Link:- https://practice.geeksforgeeks.org/problems/reach-the-nth-point5433/1

class Solution{
	public:
	    int count(int n,vector<int>&dp){
	        if(n<=2)
	            return n;
	        
	        if(dp[n]!=-1)
	            return dp[n];
	        
	        int left=count(n-1,dp);
	        int right=count(n-2,dp);
	        return dp[n]=(left+right)%(1000000007);
	    }
		int nthPoint(int n){
		    // Code here
		    vector<int>dp(n+1,-1);
		    return count(n,dp)%(1000000007);
		}
};

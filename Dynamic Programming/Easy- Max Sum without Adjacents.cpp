//Link:- https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

//User function template for C++
class Solution{
public:	
    int sum(int *arr, int n, vector<int>&dp){
        if(n==0) return arr[0];
        if(n<0) return 0;
        if(dp[n]!=-1)
            return dp[n];
        
        int take= arr[n] + sum(arr,n-2,dp);
        int n_take= 0 + sum(arr,n-1,dp);
        return dp[n] = max(take,n_take);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n+1,-1);
	    return sum(arr,n-1,dp);
	    
	}
};

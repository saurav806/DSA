//Link:- https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1

// function to find longest common subsequence

class Solution
{
    // private:
    // int com(vector<vector<int>>&dp, int n, int m, string s1, string s2){
    //     if(m==0 || n==0)
    //         return dp[n][m]=0;
    //     if(dp[n][m]!=-1)
    //         return dp[n][m];
    //     if(s1[n-1]==s2[m-1])
    //         return dp[n][m]=1+com(dp,n-1,m-1,s1,s2);
    //     else
    //         return dp[n][m]=max(com(dp,n-1,m,s1,s2), com(dp,n,m-1,s1,s2));
    // }
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // return com(dp,n,m,s1,s2);
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int i=0;i<=m;i++)
            dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+(dp[i-1][j-1]);
                else
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};

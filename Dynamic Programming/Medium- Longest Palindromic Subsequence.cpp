//Link:- https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1

//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n=A.size();
        string B=A;
        reverse(B.begin(),B.end());
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++) dp[i][0]=0;
        for(int i=0;i<=n;i++) dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==B[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};

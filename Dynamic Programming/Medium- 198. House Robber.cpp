//Link:- https://leetcode.com/problems/house-robber/description/


class Solution {
public:
    int rob(vector<int>& arr) {
        int n=arr.size();
        // int dp[n+1];
        int prev=arr[0];
        int prev2=0;
        // dp[0]=arr[0];
        for(int i=1;i<n;i++){
            int take=arr[i];
            if(i>1) take+=prev2;
            // if(i>1) take+=dp[i-2];
            int ntake=0+prev;
            // int ntake=0+dp[i-1];
            // dp[i]=max(take,ntake);
            int curri = max(take,ntake);
            prev2=prev;
            prev=curri;
            
        }
        return prev;
        // return dp[n-1];
    }
};

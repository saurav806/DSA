//Link:- https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int bag[n+1][W+1];
       for(int i=0;i<=n;i++){
           for(int j=0;j<=W;j++){
               bag[i][0]=0;
               bag[0][j]=0;
           }
       }
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
                if(wt[i-1]<=j)
                    bag[i][j]=max(val[i-1]+bag[i-1][j-wt[i-1]], bag[i-1][j]);
                else
                    bag[i][j]=bag[i-1][j];
           }
       }
       return bag[n][W];
    }
};

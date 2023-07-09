//Link:- https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int count(int n,vector<int>&mem){
        // {
        if(mem[n]==-1){
            if(n<=2)
                return n;
            int left=count(n-1,mem);
            int right=count(n-2,mem);
            int res=(left+right)%(1000000007);
            mem[n]=res;
        }
        return mem[n];
    }
    int countWays(int n)
    {
        // your code here
        vector<int>mem(n+1,-1);
        return count(n,mem);
        
    }
};

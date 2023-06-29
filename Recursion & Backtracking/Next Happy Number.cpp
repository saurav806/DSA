//Link:- https://practice.geeksforgeeks.org/problems/next-happy-number4538/1

class Solution{
public:

    int sum(int N){
        int sum=0;
        while(N>0){
            int n=N%10;
            sum+=n*n;
            N=N/10;
        }
        return sum;
    }
    
    bool happy(int N){
        if(N==1)
            return true;
        if(sum(N)==1)
            return true;
        else if(sum(N)==4)
            return false;
        else
            happy(sum(N));
    }
    int nextHappy(int N){
        // code here
        int ans=N+1;
        while(!happy(ans)){
            happy(++ans);
        }
        return ans;
    }
};

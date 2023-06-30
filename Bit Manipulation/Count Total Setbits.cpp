//Link:- https://practice.geeksforgeeks.org/problems/sherlock-and-his-enemies2304/1
// User function Template for C++
// (1<<x) = power(2,x);

class Solution{
public:
    //Calculating the power of 2 which is less than N after.
    int power(int N){
        int i=0;
        while((1<<i)<=N){
            i++;
        }
        return i-1; 
    }
    int countBits(int N){
        // code here
        //example 5
        if(N==0)
            return 0;
        // then x will be = 2
        int x=power(N);
        // ans will be 2 * ( pow(2,1) )
        int ans=x*(1<<(x-1));
        // msb will be = 5 - ( pow(2,2) ) +1
        int msb= N- (1<<(x))+1;
        // remBit will be = 5 - ( pow(2,2) )
        int remBit=N-(1<<x);
        
        int final=ans+msb+countBits(remBit);
        
        return final;
    }
};

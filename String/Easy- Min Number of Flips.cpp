//Link:- https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1

int minFlips (string S)
{
    // your code here
    int one=0;
    int zero=0;
    
    for(int i=0;i<S.size();i++){
        if((i%2==0 && S[i]!='0') || (i%2!=0 && S[i]!='1'))
            zero++;
    }
    for(int i=0;i<S.size();i++){
        if((i%2==0 && S[i]!='1') || (i%2!=0 && S[i]!='0'))
            one++;
    }
    
    return min(zero,one);
}  

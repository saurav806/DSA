//Link:- https://practice.geeksforgeeks.org/problems/divisible-by-73224/1

//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        int rem=0;
        for(int i=0;i<num.size();i++){
            rem= (rem*10+num[i]-'0')%7;
        }
        if(rem)
            return 0;
        return 1;
    }
};

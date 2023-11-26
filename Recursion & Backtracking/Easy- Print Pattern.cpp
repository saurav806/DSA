//Link:- https://www.geeksforgeeks.org/problems/print-pattern3549/1

class Solution{
public:

     void push_vec(vector<int>&res,int n){
       if(n<=0){
           res.push_back(n);
           return;
       }
       res.push_back(n);
       push_vec(res,n-5);
       res.push_back(n);
       return;
   }
   
    vector<int> pattern(int N){
        // code here
        vector<int>res;
      push_vec(res,N);
      return res;
    }
};

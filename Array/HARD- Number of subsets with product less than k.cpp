//Link:- https://practice.geeksforgeeks.org/problems/number-of-subsets-with-product-less-than-k/1

//User function Template for C++

class Solution {
  public:
    
    int helper(int arr[],int curr,int product,int n,int k){
        if(curr>=n && product>=0 && product<=k)
            return 1;
        
        if(curr>=n || product>k)
            return 0;
            
        int res=0;
        
        if(product==-1){
            res+=helper(arr,curr+1,arr[curr],n,k);
        }
        else
            res+=helper(arr,curr+1,product*arr[curr],n,k);
            
        res+=helper(arr,curr+1,product,n,k);
        return res;
    }
  
  
  int numOfSubsets(int arr[], int n, int K) {
        
        return helper(arr,0,-1,n,K);
        
    }
    
};

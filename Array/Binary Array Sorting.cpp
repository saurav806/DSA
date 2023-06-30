//Link:- https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1

class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       int start=0;
      int end=N-1;
      while(start<=end){
          if(A[start]==1 && A[end]==0){
              swap(A[start],A[end]);
              start++;
              end--;
          }
          if(A[start]==0)
            start++;
          if(A[end]==1)
            end--;
      }
      
        
    }
};

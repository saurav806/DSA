//LINK:- https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
//Technique used:- Two pointer Approach

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0)
                    return true;
                else if(sum>0)
                    k--;
                else
                    j++;
            }
        }
        return false;
    }
};

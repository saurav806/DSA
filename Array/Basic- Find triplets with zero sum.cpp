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
        for(int start=0;start<n-2;start++){
            int third=start+1;
            int end=n-1;
            while(third<end){
                int sum=arr[start]+arr[end]+arr[third];
                if(sum==0)
                    return true;
                if(sum>0)
                    end--;
                else
                    third++;
            }
        }
        return false;
    }
};

//Link:- https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=arr[0];
        long long maxSum=arr[0];
        for(int i=1;i<n;i++){
            long long temp=sum+arr[i];
            if(arr[i]<temp ){
                sum=temp;
            }
            else
                sum=arr[i];
            maxSum=max(sum,maxSum);
        }
        return maxSum;
        
    }
};
//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1


//Link:- https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
//Technique:-  Inplace manipulation of element 

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++){
            int item=arr[i];
            while(arr[i]>0 && arr[i]<n && arr[i]!=arr[item-1]){
                swap(arr[i],arr[item-1]);
                item=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]-1!=i)
                return i+1;
        }
        return n+1;
    } 
};

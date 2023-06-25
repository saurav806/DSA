
//Link:- https://practice.geeksforgeeks.org/problems/peak-element/1

//Technique used:- Binary Search

//An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid+1]>arr[mid])
                start=mid+1;
            else
                end=mid;
        }
        return end;
    }
};

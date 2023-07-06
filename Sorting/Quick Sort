//Link:- https://practice.geeksforgeeks.org/problems/quick-sort/1

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
           int pivot=partition(arr,low,high);
           quickSort(arr,low,pivot-1);
           quickSort(arr,pivot+1,high);
       }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
       int index=low-1;
       for(int i=low;i<high;i++){
           if(arr[i]<pivot)
            swap(arr[++index],arr[i]);
       }
       swap(arr[++index],arr[high]);
       return index;
    }
};

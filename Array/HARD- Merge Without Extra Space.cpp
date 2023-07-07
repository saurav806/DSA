class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0;
            int j=n-1;
            while(i<m&&j>=0){
                if(arr2[i]<=arr1[j]){
                    long long temp=arr2[i];
                    arr2[i]=arr1[j];
                    arr1[j]=temp;
                    i++;
                    j--;
                }
                else
                break;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            
        } 
};

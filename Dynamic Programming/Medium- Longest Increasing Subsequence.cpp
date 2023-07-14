//Link:- https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int ceilId(int left,int right,int a[],int val){
        while(left<right){
            int mid=left+(right-left)/2;
            if(a[mid]>=val)
                right=mid;
            else
                left = mid+1;
        }
        return right;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int tail[n],len=1;
       tail[0]=a[0];
       for(int i=1;i<n;i++){
           if(a[i]>tail[len-1]){
               tail[len]=a[i];
               len++;
           }
           else{
               int c=ceilId(0,len-1,tail,a[i]);
               tail[c]=a[i];
           }
       }
       return len;
    }
};

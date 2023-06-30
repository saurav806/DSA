// Link:- https://practice.geeksforgeeks.org/problems/a-difference-of-values-and-indexes0302/1


class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int sum=INT_MIN;
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]-i);
            mn=min(mn,arr[i]+i);
            
            int v1= arr[i]+i -mn;
            int v2= mx- (arr[i]-i);
            
            sum= max(sum,max(v1,v2));
        }
        return sum;
    } 
};

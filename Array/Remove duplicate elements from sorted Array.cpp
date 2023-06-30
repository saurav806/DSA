//Link:- https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1


//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int start=0;
        int end=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[start]!=a[end]){
                swap(a[start+1],a[end]);
                start++;
            }
            end++;
        }
        return start;
    }
};

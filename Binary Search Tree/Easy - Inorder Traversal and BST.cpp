//Link:- https://www.geeksforgeeks.org/problems/inorder-traversal-and-bst5855/1

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
         for(int i=0;i<N-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};

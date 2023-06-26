//Link :- https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        for(int i=0;i<m;i++){
            ans.push_back(matrix[0][i]);
        }
       
        if(n>1){
        for(int i=1;i<n-1;i++){
            ans.push_back(matrix[i][m-1]);
        }
        
        for(int i=m-1;i>=0;i--){
            ans.push_back(matrix[n-1][i]);
        }
        
        if(m>1)
        for(int i=n-2;i>0;i--){
            ans.push_back(matrix[i][0]);
        }
        
        }
        return ans;
    }
};

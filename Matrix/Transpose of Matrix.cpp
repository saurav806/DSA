//Link:- https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1
//Constant space and inplace swapping

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=i;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};
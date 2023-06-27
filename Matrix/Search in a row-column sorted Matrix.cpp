//Link:- https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int row=0;
        int col=m-1;
        while(col>=0 && row<n){
            if(matrix[row][col]==x)
                return 1;
            if(matrix[row][col]<x)
                row++;
            else
                col--;
        }
        return 0;
    }
};

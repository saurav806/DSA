//Link:- https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1

//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=i+1;j<matrix.size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++){
        int start=0,end=matrix.size()-1;
        while(start<end){
            swap(matrix[start][i],matrix[end][i]);
            start++;
            end--;
        }
    }
}

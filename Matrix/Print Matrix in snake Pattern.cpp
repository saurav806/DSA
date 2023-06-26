//Link:- https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            if(i%2==0){
                for(int j=0;j<matrix[i].size();j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=matrix[i].size()-1;j>=0;j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};

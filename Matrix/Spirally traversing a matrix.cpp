//Link:- https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int top=0,left=0,right=c-1,bottom=r-1;

      //Top ROW------------------------------------
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++)
                ans.push_back(matrix[top][i]);
            top++;
          
      // RIGHT COLUMN------------------------------
            for(int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            right--;

      // BOTTOM ROW-----------REVERSE ORDER----------
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

      // LEFT COLUMN----------REVERSE ORDER---------
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
            
        }
        return ans;
    }
};

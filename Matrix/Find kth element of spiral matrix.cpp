//Link :- https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1
//Same as spiral traversal

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int r,int c,int k)
    {
 		// Your code goes here.
 		int count=0;
 		int top=0,left=0,right=c-1,bottom=r-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                count++;
                if(count==k)
                    return matrix[left][i];
            }
                
            top++;
            
            for(int i=top;i<=bottom;i++){
                count++;
                if(count==k)
                    return matrix[i][right];
            }
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    count++;
                if(count==k)
                    return matrix[bottom][i];
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    count++;
                if(count==k)
                    return matrix[i][left];
                }
                left++;
            }
            
        }
    }
};


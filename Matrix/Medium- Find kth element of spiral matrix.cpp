//Link :- https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1
//Same as spiral traversal

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int top=0;  //fixing the topLeft = 0 
 		int left=0;  // fixing the bottomLeft = 0
 		int right=m-1;  // fixing the topRight = ( column-1 )
 		int bottom=n-1;  // fixing the bottomRight = ( row-1 )
 		int count=0;
 		while(top<=bottom && left<=right){
            // Calculating the topmost layer
 		    for(int i=left;i<=right;i++){
 		        count++;
 		        if(count==k)
 		            return a[top][i];
 		    }
 		    top++;

            // Calcualting the rightSide Layer
 		    for(int i=top;i<=bottom;i++){
 		        count++;
 		        if(count==k)
 		            return a[i][right];
 		    }
 		    right--;

            // Calculating the bottom Layer if exist
 		    if(top<=bottom){
     		    for(int i=right;i>=left;i--){
     		        count++;
     		        if(count==k)
     		            return a[bottom][i];
     		    }
     		    bottom--;
 		    }

            // Calculating the  leftMost layer if exist
 		    if(left<=right){
 		        for(int i=bottom;i>=top;i--){
     		        count++;
     		        if(count==k)
     		            return a[i][left];
 		        }
 		        left++;
 		    }
 		}
    }
};


//Link:- https://practice.geeksforgeeks.org/problems/x-total-shapes3617/1

class Solution
{
    private:
    void dfs(int i,int j,vector<vector<int>>&vis, vector<vector<char>>&grid){
        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        
        int drow[]={0,-1,0,1};
        int dcol[]={1,0,-1,0};
        
        for(int k=0;k<4;k++){
            int nrow=i+drow[k];
            int ncol=j+dcol[k];
            if(nrow<n && nrow>=0 && ncol>=0 && ncol<m 
            && grid[nrow][ncol]=='X' && vis[nrow][ncol]!=1){
                dfs(nrow,ncol,vis,grid);
            }
        }
        
    }
    public:
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        // vector<vector<int>>vis[n];
        // int vis[n][m]={0};
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X' && vis[i][j]!=1){
                    count++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};

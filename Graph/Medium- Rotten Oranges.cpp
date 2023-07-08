//Link:- https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cntFresh=0;
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2 ){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1) cntFresh++;
            }
        }
        
        int tm=0;
        int drow[]={0,-1,0,1};
        int dcol[]={1,0,-1,0};
        int cnt=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int tim=q.front().second;
            tm=max(tm,tim);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                    && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                        q.push({{nrow,ncol},tim+1});
                        vis[nrow][ncol]=2;
                        cnt++;
                    }
            }
        }
        if(cnt!=cntFresh) return -1;
        return tm;
        
    }
};

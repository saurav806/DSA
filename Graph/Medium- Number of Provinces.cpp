//Link:- https://practice.geeksforgeeks.org/problems/number-of-provinces/1

//User function Template for C++

class Solution {
  private:
    void dfs(int node, vector<vector<int>>&adj, int vis[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>>adjList(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        
        int count=0;
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjList,vis);
            }
        }
        return count;
    }
};

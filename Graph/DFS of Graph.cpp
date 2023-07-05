//Link:- https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int>adj[], bool visited[], int i, vector<int>&ans){
        visited[i]=true;
        ans.push_back(i);
        for(int j:adj[i]){
            if(!visited[j]){
                visited[j]=true;
                dfs(adj,visited,j,ans);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        bool visited[V]={false};
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(adj,visited,i,ans);
            }
        }
        return ans;
    }
};

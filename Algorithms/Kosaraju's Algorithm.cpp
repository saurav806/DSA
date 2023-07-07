//Link:- https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/0

class Solution
{
    private:
    
    void dfs2(int i,vector<int>&visited,vector<vector<int>>& adj){
        visited[i]=1;
        for(auto it:adj[i]){
            if(!visited[it])
                dfs2(it,visited,adj);
        }
    }
	
	private:
	
	void dfs(int i,vector<int>&visited,vector<vector<int>> &adj,stack<int>&seq){
	    visited[i]=1;
	    
	    for(auto it:adj[i]){
	        if(!visited[it])
	            dfs(it,visited,adj,seq);
	    }
	    seq.push(i);
	}
	
	public:
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        
        vector<int> visited(V,0);
        stack<int>seq;
        for(int i=0;i<V;i++){
            if(!visited[i])
                dfs(i,visited,adj,seq);
        }
        
        vector<vector<int>>adjT(V);
        adjT.reserve(V);
        for(int i=0;i<V;i++){
            visited[i]=0;
            for(auto it:adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        int scc=0;
        while(!seq.empty()){
            int nod=seq.top();
            seq.pop();
            if(!visited[nod]){
                scc++;
                dfs2(nod, visited, adjT);
            }
        }
        
        return scc;
    }
};

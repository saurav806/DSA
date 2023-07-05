//Link:- https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        vector<int>ans;
        bool visited[V]={false};
        visited[0]=true;
        q.push(0);
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            ans.push_back(ele);
            for(auto i:adj[ele]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
        return ans;
    }
};

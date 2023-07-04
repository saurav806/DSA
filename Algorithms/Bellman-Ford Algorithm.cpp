//Link:- https://practice.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1

// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(V,1e8);
        dist[S]=0;
        for(int i=0;i<V;i++){
            for(int j=0;j<edges.size();j++){
                int src=edges[j][0];
                int dest=edges[j][1];
                int weight=edges[j][2];
                
                if(dist[src]!=1e8 && dist[src]+weight < dist[dest]){
                    dist[dest]=dist[src]+weight;
                }
            }
        }

      // for detecting cycle we iterate the same loop one more time
        for(int j=0;j<edges.size();j++){
                int src=edges[j][0];
                int dest=edges[j][1];
                int weight=edges[j][2];
                
                if(dist[src]!=1e8 && dist[src]+weight < dist[dest]){
                    return {-1};
                }
            }
        return dist;
    }
};

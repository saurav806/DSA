//Link:- https://practice.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1

class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here

      // Creating MIN HEAP
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        //Creating a graph with adjacency list
        vector<pair<int,int>>adj[n+1];
        for(auto i:edges){
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }

      //Creating distance and parent vector
      //distance vector :- for maintaining the distance from each node
      //parent vector :- for mainting the path and for backtracking the previous path
        vector<int>dist(n+1,1e9),parent(n+1);
        pq.push({0,1});
        dist[1]=0;

      // initializing the parent vector to its own index at first
        for(int i=1;i<=n;i++) parent[i]=i;

      // iterating the loop till pq is empty
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.second;
            int weight=it.first;
            pq.pop();
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                int adjWeight=it.second;
                
                if(adjWeight+weight < dist[adjNode]){
                    dist[adjNode]= adjWeight+weight;
                    pq.push({dist[adjNode],adjNode});

                  // updating the parent vector with the node because we reached to the adjNode after traversing the node (parent) vector
                  // so it will keep on updating if the above if condition will true and that is for minimum path .
                    parent[adjNode]=node;
                }
            }
        }

      // returning '-1' if we cannot reach to the destination
        if(dist[n]==1e9) return {-1};

      //creating path vector in which we store the path of the shortest path
        vector<int>path;
      //creating node for traversing and for backtracking
        int node=n;
      // invert Loop will execute till the parent node will reach to the starting node 
        while(parent[node] != node){
            path.push_back(node);
            node=parent[node];
        }
      // pushing '1' because this is our starting point
        path.push_back(1);
      // reversing the final path because by backtracking our result was in reverse direction.
        reverse(path.begin(),path.end());
        
      // returning the path
        return path;
        
    }
};

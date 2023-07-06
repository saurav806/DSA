//Link:- https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        dist[S]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        
        while(!pq.empty()){
            int newNode=pq.top().second;
            int weight=pq.top().first;
            pq.pop();
            for(auto it: adj[newNode]){
                int itsNode=it[0];
                int itsDist=it[1];
                if(weight+itsDist < dist[itsNode]){
                    dist[itsNode]=weight+itsDist;
                    pq.push({dist[itsNode], itsNode});
                }
            }
        }
        return dist;
        
    }
};

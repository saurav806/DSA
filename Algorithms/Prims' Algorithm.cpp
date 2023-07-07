//Link:- https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<bool>visited(V,false);
        //pair of weight and node
        int sum=0;
        pq.push({0,0});
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.second;
            int weight=it.first;
            pq.pop();
            if(visited[node]) continue;
            visited[node]=true;
            sum+=weight;
            for(auto it:adj[node]){
                int edNode=it[0];
                int edWeight=it[1];
                if(!visited[edNode])
                    pq.push({edWeight,edNode});
            }
        }
        return sum;
    }
};

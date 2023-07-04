//Link:- https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set<pair<int,int>>st;
        vector<int>dist(V,INT_MAX);
        st.insert(make_pair(0,S));
        dist[S]=0;
        while(!st.empty()){
            auto data= *st.begin();
            int node=data.second;
            int distance=data.first;
            st.erase(st.begin());
            
            for(auto neighbour:adj[node]){
                if(distance+neighbour[1] < dist[neighbour[0]]){
                    
                    auto record= st.find(make_pair(dist[neighbour[0]],neighbour[0]));
                    if(record!=st.end())
                        st.erase(record);
                    
                    dist[neighbour[0]]=distance+neighbour[1];
                    st.insert(make_pair(distance+neighbour[1],neighbour[0]));
                    
                    
                }
            }
        }
        return dist;
    }
};
//Link:- https://practice.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph5311/1

// User function Template for C++

class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        // code here
        int count=0;
        for(int i=0;i<V;i++){
            // for(int j:adj[i])
            //     count++;
            count+=adj[i].size();
        }
        return count;
    }
};

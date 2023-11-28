//Link:- https://www.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph5311/1


class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        // code here
         int count=0;
        for(int i=0;i<V;i++){
            count+=adj[i].size();
        }
        return count;
    }
};

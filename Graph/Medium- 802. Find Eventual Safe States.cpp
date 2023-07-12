//Link:- https://leetcode.com/problems/find-eventual-safe-states/description/

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        vector<int>safeNodes;
        vector<vector<int>>graphRev(graph.size());
        vector<int>inDeg(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            for(auto it:graph[i]){
                graphRev[it].push_back(i);
                inDeg[i]++;
            }
        }

        queue<int>q;
        for(int i=0;i<graph.size();i++){
            if(inDeg[i]==0)
                q.push(i);
        }
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto i:graphRev[node]){
                // inDeg[i]--;
                if(--inDeg[i]==0)
                    q.push(i);
            }
        }

        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;

    }
};
